#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<int> v(n);
    long long ans=INT_MIN,temp=0;
for(int&a:v) cin>>a;
for(long long i=0;i<n;i++)
{
    temp+=v[i];   ans=max(temp,ans);
    if(temp<0)
    temp=0;
 
}
cout<<ans;

}