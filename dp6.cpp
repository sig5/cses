#include<bits/stdc++.h>
using namespace std;
const long long int mod=(long long int)1e9+7;
//vector<vector<long long int>> dp(1000,vector<long long int>(1000,nax));
long long int nax=(long long int)(1e9);
void add_self(long long int &a,long long int b)
{
    a+=b;
    if(a>mod)
    {
        a-=mod;
    }}
int main()
{
    
    long long n;
    cin>>n;
    vector<string> v(n);
    for(long long int i=0;i<n;i++)
    cin>>v[i];
    if(n==1 and v[0][0]=='*')
    {
        cout<<0<<endl;return 0;
    }

    vector<vector<long long int>>dp(n,vector<long long int>(n,0));
    for(long long int i=0;i<n;i++)
    {
        for(long long int j=0;j<n;j++)
        {
            if(i==0 and j==0)
            {
                dp[i][j]=1;
                continue;
            }
            if(i>0 and v[i-1][j]=='.' and v[i][j]=='.')
            add_self( dp[i][j],dp[i-1][j]);
            if(j>0 and v[i][j-1]=='.' and v[i][j]=='.')
            add_self(dp[i][j],dp[i][j-1]);           
            
        }
    }
    cout<<dp[n-1][n-1];

}