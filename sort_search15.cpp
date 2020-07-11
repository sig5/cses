#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long deadline=0;
    vector<long long> time(n);
    for(int i=0;i<n;i++)
    {
       
        cin>>time[i]; int a;
        cin>>a;
        deadline+=a;
    }
    sort(time.begin(),time.end());
    for(int i=1;i<n;i++)
    {
        time[i]+=time[i-1];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=time[i];
    }
    cout<<deadline-sum;

}