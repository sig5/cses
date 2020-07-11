#include<bits/stdc++.h>
using namespace std;
int  main()
{
    unsigned long long  n,x;
    cin>>n>>x;
    vector<unsigned long long > t(n);
    for(unsigned long long   i=0;i<n;i++)
    {cin>>t[i];
   
    }
    sort(t.begin(),t.end());
    unsigned long long   l=0,r=t[n-1]*x+1;
    unsigned long long   final_ans=-1;
    while(l<=r)
    {
        unsigned long long   mid=(-l+r)/2+l;
        //check if possible
        unsigned long long   ans=0; 
        unsigned long long  mid1=mid;
        for(unsigned long long   i=0;i<n;i++)
        {
          ans+=mid1/t[i];

        }
       //cout<<ans<<endl;
        if(ans>=x)
        {final_ans=mid;
            r=mid-1;
            
        }
        else
        {
            l=mid+1;
        }
        

    }
    cout<<final_ans;
}