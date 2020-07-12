#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    multiset<pair<int,pair<int,int>>> mp;
    vector<int> p;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        int sum=v[i]+v[j];
        mp.insert({sum,{i+1,j+1}});

        }
    }
    for(auto ele:mp)
    {
        auto it= ele;
        mp.erase(it);
        auto sol=mp.lower_bound({x-ele.first,{INT_MIN,INT_MIN}});
        if((*sol).first+ele.first==x  and ele.second.first!=(*sol).second.first and ele.second.first!=(*sol).second.second and ele.second.second!=(*sol).second.first and ele.second.second!=(*sol).second.second)
        {
            cout<<ele.second.first<<" "<<ele.second.second<<" "<<(*sol).second.first<<" "<<(*sol).second.second;
            return 0;
        }
        mp.insert(ele);
    }
cout<<"IMPOSSIBLE\n";
}