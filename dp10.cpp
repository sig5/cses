#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<vector<int>> dp(a+1,vector<int>(b+1,0));
    for(int i=1;i<a+1;i++)
    {
        for(int j=1;j<b+1;j++)
        {
            if(i==j)
            {
                dp[i][j]=0;
                continue;
            }
            int x=INT_MAX;
            for(int k=1;k<i;k++)
            {
                 x=min(dp[i-k][j]+dp[k][j]+1,x);
            }
            for(int k=1;k<j;k++)
            {
                x=min(dp[i][j-k]+dp[i][k]+1,x);
            }
            dp[i][j]=x;
        }
    }
    cout<<dp[a][b];
}