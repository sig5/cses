#include<bits/stdc++.h>
using namespace std;
const long long mod=(long long)1e9+7;

void add_self(int &a,int b)
{
    a+=b;
    if(a>mod)
    {
        a-=mod;
    }
}
int main()
{
    long long n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[1]=1;
    dp[0]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i>=j)
            add_self(dp[i],dp[i-j]);
        }
    }
    cout<<dp[n]<<endl;

}