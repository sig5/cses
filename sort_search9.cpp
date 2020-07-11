#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long int n;
    cin>>n;
    vector<long long int> v(n);
    for(long long int &a:v)
    cin>>a;
    sort(v.begin(),v.end());
    long long int cost=LONG_LONG_MAX;
    long long int val=v[n/2],val2=v[n/2-1];
    long long int cost1=0,cost2=0;
    for(int i=0;i<n;i++)
    {
        cost1+=abs(v[i]-val);
        cost2+=abs(v[i]-val2);
    }
cout<<min(cost1,cost2);
}