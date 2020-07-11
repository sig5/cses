#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ans=0;
    vector<int> v1,v2;
    if((n*(n+1)%4)!=0)
{
    cout<<"NO\n";return 0;
}
cout<<"YES\n";
    for(int i=n;i>0;i--)
    {
        if((i/2)&1)
        {
            v1.push_back(i);
            i--;
            if(i<1)
            break;
            v2.push_back(i);
        }
        else
        { v2.push_back(i);
            i--;
            if(i<1)
            break;
            v1.push_back(i);
        }
    }
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<endl;
       cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;
   
}