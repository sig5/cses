#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++)
  {cin>>v[i].first;v[i].second=i+1;}
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<i;j++)
  {
      int a=v[i].first;
      int b=v[j].first;
      int l=i+1,r=n-1;
      int req=x-a-b;
      int c=-1;
      while (l<=r)
      {
          int mid=(l+r)>>1;
          if(v[mid].first==req)
          {
              c=mid;break;
          }
          if(v[mid].first<req)
          {
              l=mid+1;
          }
          else
          {
              r=mid-1;
          }
          
      }
      if(c!=-1)
      {
          cout<<v[i].second<<' '<<v[j].second<<" "<<v[c].second;return 0;
      }
      
  }
  }
cout<<"IMPOSSIBLE\n";


}