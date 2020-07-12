#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    vector<int> a(n);
   // for(int &i:a) cin>>i;
    vector<int> ans(n);
    int pos=-1;
    ans[0]=pos+1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            if(a[i]>a[i-1])
            {
                ans[i]=i;
                pos=i;

            }
            if(a[i]==a[i-1])
            {
                ans[i]=ans[i-1];
                pos=ans[i-1];
            }
            if(a[i]<a[i-1])
            {
                int pos1=i;
                while(pos1>0)
                {
                    if(a[pos1-1]<a[i])
                    {
                        ans[i]=pos1;
                        break;
                    }
                    pos1=ans[pos1-1];
                }
            }

        }
        cout<<ans[i]<<" ";
    }
}