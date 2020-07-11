// #include<bits/stdc++.h>
// using namespace std;
// long long main()
// {long long n,q;
// cin>>n>>q;
// vector<long long> x(n+1,0);
// vector<long long> pre(n+1,0);
// for(long long i=1;i<=n;i++)
// {
// cin>>x[i];
// }
// for(long long i=1;i<n;i++)
// {
// pre[i]=pre[i-1]+x[i];
// }
// while(q--)
// {
//     long long l,r;
//     cin>>l>>r;
//     cout<<pre[r]-pre[l-1]<<endl;
// }


// }
//segtrees
#include<bits/stdc++.h>
using namespace std;
const long long nax=200005;
vector<long long> v;
long long tree[4*nax];
void build(long long l,long long r,long long node)
{

    if(l==r)
    {
        tree[node]=v[l];
        return;
    }
    long long mid=(l+r)/2;
    build(l,mid,2*node);
    build(mid+1,r,2*node+1);
    tree[node]=tree[2*node]^tree[2*node+1];

}
long long sum(long long v, long long tl, long long tr, long long l, long long r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return tree[v];
    }
    long long tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
            ^sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}
int main()
{
long long n,q;
cin>>n>>q;
//cout<<n<<endl;
v.resize(n+1);
for(long long i=1;i<=n;i++)
cin>>v[i];

build(1,n,1);
//cout<<"lol";
while(q--)
{
    long long l,r;
    cin>>l>>r;
    cout<<sum(1,1,n,l,r)<<endl;
}

}