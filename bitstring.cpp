#include<bits/stdc++.h>
using namespace std;
long long int mod=(long long int)(1e9+7);
long long exp(int n)
{
    if(n==1)
    return 2;
    if(n==0)
    return 1;
    if(not n&1)
    {
        long long int tp=exp(n/2)%mod;
        return (tp*tp)%mod;
    }
    return (2*exp(n-1))%mod;
}

int main()
{
    int n;
    cin>>n;
    cout<<
}