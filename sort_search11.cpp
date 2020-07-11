#include<bits/stdc++.h>
using namespace std;
int main()
{ios::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> k(n);
    for(int &a:k) cin>>a;
  multimap<int,int> towers;
    towers.insert({k[0],1});
    for(int i=1;i<n;i++)
    {auto it=towers.upper_bound(k[i]);
        if(it==towers.end())
        {
            towers.insert({k[i],1});
            //ans++;
        }
        else
        {
            towers.erase(it);
            towers.insert({k[i],1});
        }
        


    }
    cout<<towers.size()<<endl;
}