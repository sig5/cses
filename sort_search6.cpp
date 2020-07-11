#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i].second>>v[i].first;
    sort(v.begin(),v.end());
    int cnt=1;
    int r=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second>=r)
        {
        cnt++;
            r=v[i].first;
        }

        
    }
cout<<cnt-1<<endl;
}