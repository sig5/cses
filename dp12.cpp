#include<bits/stdc++.h>
using namespace std;
long long int counter=0;
  vector<long long int> v;
long long int mp[6000][6000];
long long int dp(long long int l,long long int r)
{
    if(l>r)
    return 0;
    if(l==r )
    return v[l];
    else if(l==r)
    return 0;
    if(mp[l][r]!=0)
    {
        return mp[l][r];
    }
    return mp[l][r]=max(v[l]+min(dp(l+2,r),dp(l+1,r-1)),v[r]+min(dp(l,r-2),dp(l+1,r-1)));
 
}
int main() 
{
    long long int n;
    cin>>n;
    v.resize(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<dp(0,n-1)<<endl;

}