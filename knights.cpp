#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int k,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {k=i;
        long long ans=k*k*(k*k-1)/2-4*(k-1)*(k-2);
        cout<<ans<<endl;
    }
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    
}
