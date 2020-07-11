#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int&a:v) cin>>a;
    vector<int> aux(n+1,INT_MAX);
    aux[0]=INT_MIN;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
       int l=0,r=n;
       
       while(l<=r)
       {
           int mid=(l+r)/2;
            if(v[i]>aux[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            
       }
       aux[l]=v[i];
    ans=max(l,ans);
    }
    cout<<ans<<endl;


}