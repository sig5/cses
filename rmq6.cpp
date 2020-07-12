#include<bits/stdc++.h>
using namespace std;
const long long  nax=200005;
vector<long long > tree(4*nax,0),lazy(4*nax,0),v(nax);
void push(long long  node)
{
    lazy[2*node+1]+=lazy[node];
    tree[2*node+1]+=lazy[node];
      lazy[2*node]+=lazy[node];
    tree[2*node]+=lazy[node];
    lazy[node]=0;

}
void build(long long  tl,long long  tr,long long  node)
{
    if(tl==tr)
    {
        tree[node]=v[tl];
    //    cout<<tree[node]<<endl;
       
    }
    else{
    long long  mid=(tl+tr)/2;
    build(tl,mid,2*node);
    build(mid+1,tr,2*node+1);
    tree[node]=0;}
    //cout<<tree[node]<<endl;
}
void update(long long  l,long long  r,long long  node,long long  tl,long long  tr,long long  k)
{
    if(l>r )
    return;
    if(l==tl and r==tr)
    {
        tree[node]+=k;
        lazy[node]+=k;
    }
    else
    {
        if(lazy[node]!=0)
        push(node);
        long long  mid=(tl+tr)/2;
        update(l,min(r,mid),2*node,tl,mid,k);
        update(max(l,mid+1),r,2*node+1,mid+1,tr,k);
        if(tree[2*node]== tree[2*node+1])
        tree[node]=k;

    }

}
long long  query(long long  tl,long long  tr,long long  l,long long  r,long long  node)
{
    if(l>r)
    {
        return 0;
    }
    if(tl==l and tr==r)
    {
        return tree[node];
    }
     if(lazy[node]!=0)
    push(node);
    long long  mid=(tl+tr)/2;
    long long  left=query(tl,mid,l,min(r,mid),2*node);
    long long  right=query(mid+1,tr,max(l,mid+1),r,2*node+1);
   // cout<<left<<" "<<right<<endl;
    return max(left,right);
}
int main()
{
    long long  n;
    cin>>n;
    long long  q;
    cin>>q;
    for(long long  i=0;i<n;i++)
    {
        cin>>v[i+1];
    }
    build(1,n,1);
    while(q--)
    {
        long long  a;
        cin>>a;
        if(a==1)
        {
            long long  l,r,u;
            cin>>l>>r>>u;
            //working
            update(l,r,1,1,n,u);
        }
        else
        {
            long long  k;
            cin>>k;
            cout<<query(1,n,k,k,1)<<endl;;
        }
        
    }
    

}