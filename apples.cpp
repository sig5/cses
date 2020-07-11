
#include<bits/stdc++.h>
using namespace std;

 int main()
{
    long  long int n;
    cin>>n;
    long long int v[n];
    long long int sum=0;
    for(long  long int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long ans=INT_MAX;
    for(int i=0;i<(1<<n);i++)
    {
       long long int sum1=0,sum2=0;
        for(int j=0;j<n;j++)
        {
            int  mask=1<<j;
            if(mask & i)
            {
                sum1+=v[j];
            }
            else
            {
                sum2+=v[j];
            }
        }
      // cout<<sum1<<" "<<sum2<<endl;
        ans=min(abs(sum1-sum2),ans);

    }
    cout<<ans<<endl;

 
}
