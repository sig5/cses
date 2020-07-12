#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    cin>>v[i];
    multiset<pair<int,pair<int,int>> mp;
    vector<int> p;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        int sum=v[i]+v[j];
        mp.insert(sum,{i,j});

        }
    }
    for(auto ele:mp)
    {
        auto it= ele;
        mp.erase(it);
        auto sol=mp.lower_bound({ele.first,{INT_MIN,INT_MIN}});
        if(sol!=mp.end())
        {
            cout<<ele.second.first<<" "<<ele.second.second<<" "<<sol.second.first<<" "<<sol.second.second;
        }
        mp.insert(ele);
    }
cout<<"IMPOSSIBLE\n";
}