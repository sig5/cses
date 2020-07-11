#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,m;
cin>>n;
vector<pair<int,int>> v(2*n);
for(int i=0;i<2*n;i+=2)
{
    cin>>v[i].first>>v[i+1].first;
v[i].second=0;
v[i+1].second=1;
}
sort(v.begin(),v.end());
int cnt=0,ans=0;
//int l=v[0].second,r=v[0].first;
for(int i=0;i<2*n;i++)
{
    if(v[i].second==1)
    {
        cnt-=1;
    }
    else
    {
        cnt+=1;
    }
    ans=max(ans,cnt);
    
}
cout<<ans<<endl;

}