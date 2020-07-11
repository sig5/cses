#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int x;
cin>>x;
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i].first;
    v[i].second=i;
}
sort(v.begin(),v.end());
int l=0,r=n-1;
int p1=-1,p2=-1;
while(l<r)
{
if(v[l].first+v[r].first==x)
{
    p1=v[l].second;
    p2=v[r].second;
    break;
}
else if(v[l].first+v[r].first>x)
{
    r--;
}
else l++;
}
if(p1==-1) cout<<"IMPOSSIBLE\n";
else
cout<<p1+1<<" "<<p2+1<<endl;



}
