#include<bits/stdc++.h>
using namespace std;
const int mod=(int)1e9+7;
//vector<vector<int>> dp(1000,vector<int>(1000,nax));
int nax=(int)(1e9);
void add_self(int &a,int b)
{
    a+=b;
    if(a>mod)
    {
        a-=mod;
    }
}
void extract(int n,vector<int>&temp)
 {
 unordered_map<int,int> mp;
 if(n==0)
 {
     temp.push_back(n);
     return ;
 }
     while(n)
     {if(mp[n%10]==0)
     {mp[n%10]=1;
temp.push_back(n%10);
}
n/=10;
     } 
     //sort(temp.begin(),temp.end());
     //return temp;
 }
int main()
{
    long long n;
    cin>>n;
    vector<int> dp(n+1,INT_MAX);
    dp[n]=0;
    for(int i=n;i>=0;i--)
    {
        vector<int> temp;
        extract(i,temp);
        for(int j=0;j<temp.size();j++)
        {
            if(i-temp[j]>=0 and dp[i]!=INT_MAX)
            dp[i-temp[j]]=min(dp[i]+1,dp[i-temp[j]]);
        }

    }
cout<<dp[0]<<endl;
}