#include<bits/stdc++.h>
using namespace std;
vector<long long> start,stop,price;

int main()
{
    long long n;
cin>>n;
vector<pair<pair<long long,long long>,long long> >v(n+1);
for(long long i=1;i<=n;i++)
{
    cin>>v[i].first.second>>v[i].first.first>>v[i].second;
}
sort(v.begin()+1,v.end());
vector<long long> dp(n+1,0);
dp[0]=0;
for(long long i=1;i<=n;i++)
{
    // for(long long j=i-1;j>=0;j--)
    // {
    //     if(v[j].first.first<v[i].first.second)
    //     {
    //         dp[i]=max(max(dp[j]+v[i].second,dp[i-1]),dp[i]);
    //   break;
         
    //     }
     
        
    // }
    int l=0,r=i-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid].first.first<v[i].first.second)
        {  dp[i]=max(max(dp[mid]+v[i].second,dp[i-1]),dp[i]);
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

        
    }
 //    dp[i]=max(max(dp[l]+v[i].second,dp[i-1]),dp[i]);


}
cout<<dp[n]<<endl;


}