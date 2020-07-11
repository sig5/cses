#include<bits/stdc++.h>
using namespace std;
 long long int dp[250000][501];
 long long int mod=(long long )1e9+7*1LL;
 void add_self(long long int &a,long long int b)
 {
     a+=b;
     if(a>=mod)
     {
         a-=mod;
     }
 }
int main() 
{
    long long int n;
    cin>>n;
    long long sum=n*(n+1);
    sum/=2;
    if(sum&1)
    {cout<<0<<endl;return 0;}
    sum/=2;
   
    for(long long int i=0;i<=sum;i++)
    {
        for(long long int j=0;j<n;j++)
        {
            if(i==0 and j==0)
            {
                dp[i][j]=1;
                continue;
            }
            if(i>=j)
            add_self(dp[i][j],dp[i][j-1]+dp[i-j][j-1]);
            else
            add_self(dp[i][j],dp[i][j-1]);
        }
    }
cout<<dp[sum][n-1];

}