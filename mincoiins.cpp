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
    vector<long long> v(n);
    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<long long> dp(x+1,nax);
    dp[0]=0;
    for(long long i=1;i<=x;i++)
    {
        for(long long j=0;j<n;j++)
        {
            if(i>=v[j] and dp[i-v[j]]!=nax)
            dp[i]=min(dp[i-v[j]]+1,dp[i]);
        }
    }
    if(dp[x]>x)
    {
        cout<<-1<<endl;return 0;
    }
    cout<<dp[x];
}