#include<bits/stdc++.h>
using namespace std;
const int nax=200005;
int tree[4*nax];
vector<int> v(nax);
void build(int u,int l,int r)
{
    if(l==r)
    {
        tree[u]=v[l];
        return;
    }
    int mid=(l+r)/2;
    build(2*u,l,mid);
    build(2*u+1,mid+1,r);
    tree[u]=min(tree[2*u],tree[2*u+1]);

}
int query(int tl,int tr,int l,int r,int v)
{
    if(l>r)
    return INT_MAX;
    if(tl==l and tr==r)
    return tree[v];
    int mid=(tl+tr)/2;
    int left=query(tl,mid,l,min(r,mid),2*v);
    int right=query(mid+1,tr,max(l,mid+1),r,2*v+1);
    return min(left,right);

}
int main()
{
    int n,q;
    cin>>n>>q;
    //vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i+1];
    build(1,1,n);

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<query(1,n,l,r,1)<<endl;
    }



}