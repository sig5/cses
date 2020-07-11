#include<bits/stdc++.h>
using namespace std;
const int nax=200005;
vector<int> tree(4*nax,0),v(nax),lazy(4*nax,0);
void push_updates(int v)
{
    lazy[2*v]=lazy[v];
    tree[2*v]+=lazy[v];
    lazy[2*v+1]+=lazy[v];
    tree[2*v+1]+=lazy[v];
    lazy[v]=0;
}
void build(int v,int l,int r)
{
    if(l==r)
    {
        tree[v]=v[l];
    }
    int mid = =(l+r)/2;
    build(v,l,mid);
    build(v,mid+1,r);
}
void update(int l,int r,int tl,int tr,int val,int u)
{
    if(l>r)
    return ;
    if(tl==l and tr==r)
    {
        lazy[u]+=val;
        tr[u]+=val;
        return;
    }
    int tm=(tl+tr)/2;
    push(u)
    update(l,min(r,tm),tl,tm,val,2*v);
    update(max(tm+1,r),r,tm+1,tr,2*v+1);
}
int query(int tl,int tr,int l,int r,int v)
{
    if(l>r)
    return 0;
    if(tl==l and tr==r)
    {
        
    }
}
int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>v[i+1];







}