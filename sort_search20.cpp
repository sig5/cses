#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    cin>>n;
    cin>>x;

    vector<int> v(n),pre(n,0);
    int l=0,r=0;
for(int &i:v) cin>>i;
pre[0]=v[0];
for(int i=1;i<n;i++)
pre[i]+=pre[i-1]+v[i];
int ans=0;
int sum=0;
//0int l=0,r=n-1;
while(r<n)
{
    if(l)
    sum=pre[r]-pre[l-1];
    else sum=pre[r];
    if(sum==x)
    {//cout<<l<<" "<<r<<" \n";
        ans++;
        l++;r++;
    }
    else if(sum<x)
    r++;
    else
    {
        l++;
    }
}
cout<<ans<<endl;

}