#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
vector<int>v(n);
for(int&a:v) cin>>a;
sort(v.begin(),v.end());
int ans=1;
for(int i=1;i<n;i++)
if(v[i]!=v[i-1])
ans++;
cout<<ans<<endl;

}