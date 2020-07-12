#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);ios_base::sync_with_stdio(false);
    long long n;
    long long x;
    cin>>n;
    cin>>x;

    vector<long long > v(n),pre(n,0);
for(long long &i:v) cin>>i;
long long ans=0;
long long sum=0;
map<long long ,long long > found;
for(long long i=0;i<n;i++)
{sum+=v[i];
if(sum==x)
ans++;
if(found.find(sum-x)!=found.end())
{
    ans+=found[sum-x];
}
found[sum]++;

}
cout<<ans<<endl;

}