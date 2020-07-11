#include<bits/stdc++.h>
using namespace std;
const long long mod=(long long)1e9+7;
//vector<vector<long long>> dp(1000,vector<long long>(1000,nax));
long long nax=(long long)(1e9);
void add_self(long long &a,long long b)
{
    a+=b;
    if(a>mod)
    {
        a-=mod;
    }
}
int main()
{
    long long n,x;
    cin>>n>>x;
  long long v[n];
    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
    }

vector<long long> dp(x+1,0);
dp[0]=1;
for(int i=0;i<n;i++)
{
    for(int j=v[i];j<=x;j++)
    {
        add_self(dp[j],dp[j-v[i]]);
    }
}
cout<<dp[x]<<endl;
}d