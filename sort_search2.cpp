#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> a(n),b(m);
    for(long long &v:a) cin>>v;
    for(long long &v:b) cin>>v;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long l=0,ans=0;;
    for(long long i=0;i<n;i++)
    {if(l>m-1)
    break;
        while(l<m)
        {if(abs(a[i]-b[l])>k and a[i]>=b[l])
        l++;
        else if(abs(a[i]-b[l])>k and a[i]<b[l])
        break;
        else if(l>m-1)
        break;
        else if(abs(a[i]-b[l])<=k)
        {
            ans++;l++;break;
        }
        
        
        }}
        cout<<ans<<endl;
}