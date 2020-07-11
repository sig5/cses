#include<bits/stdc++.h>
using namespace std;
const long long nax=200005;
vector<long long> v(nax,0),tree(4*nax);
void build(long long l,long long r,long long u)
{
    if(l==r)
    {
        tree[u]=v[l];
    return;
    }
    long long mid=(l+r)/2;
    build(l,mid,2*u);
    build(mid+1,r,2*u+1);
    tree[u]=tree[2*u+1]+tree[2*u];
}
long long query(long long tl,long long tr,long long l,long long r,long long v)
{
    if(l>r)
    return 0;
    if(l==tl and r==tr)
    return tree[v];
    long long tm=(tr+tl)/2;
    long long left=query(tl,tm,l,min(tm,r),2*v);
    long long right=query(tm+1,tr,max(l,tm+1),r,2*v+1);
    return left+right;
}
void update(long long tl,long long tr,long long pos,long long val,long long u)
{
    if(tl==tr)
    {
        tree[u]=val;
      
    }
    else
    {
    long long tm=(tl+tr)/2;
    if(pos<=tm)
    {
        update(tl,tm,pos,val,2*u);
    }
    else
    {
        update(tm+1,tr,pos,val,2*u+1);
    }
 
    tree[u]=tree[2*u]+tree[2*u+1];   }
    
}
long long main()
{
    long long n,q;
    cin>>n>>q;

    for(long long i=1;i<n+1;i++)
    {
        cin>>v[i];
    }build(1,n,1);
    while(q--)
    {
        long long type;
        cin>>type;
        if(type==2)
        {
            long long l;long long r;
            cin>>l>>r;
            cout<<query(1,n,l,r,1)<<endl;
        }
        else
        {
            long long pos,val;
            cin>>pos>>val;
            update(1,n,pos,val,1);

        }
        
    }
}