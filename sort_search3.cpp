#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for( int &a:v) cin>>a;
    sort(v.begin(),v.end());
    int l=0,r=n-1;
    int cnt=0;
    while(l<r)
    {
        if(v[l]+v[r]<=x)
        {
            cnt++;
            l++;r--;
        }
        else {
            cnt+=1;
            r--;
        }
    }
    if(l==r)
    cnt++;
    cout<<cnt<<endl;
}