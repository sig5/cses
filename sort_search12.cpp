#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long  n,x;
    cin>>x>>n;
   set<int> points;
   multiset<int> lengths;
   points.insert(0);
   points.insert(x);
   lengths.insert(x);
   while(n--)
   {
       int k;
       cin>>k;
       auto it=points.upper_bound(k);
       int left=*prev(it);
       int right=*it;
       int length=right-left;
       lengths.erase(lengths.find(length));
       lengths.insert(right-k);
       lengths.insert(k-left);
       points.insert(it,k);cout<<*(lengths.rbegin())<<"\n";
   }



}