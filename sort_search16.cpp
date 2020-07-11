#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    long long  sum=0;
    vector<long long> v(n);
    for(long long &i:v) {cin>>i;sum+=i;}
    long long  sum1=0;
    sort(v.begin(),v.end(),greater<long long>());
    /*********************************************
     * if xn is greater than rest sum then we will have 2*max
     * or i can read in order differing by index 1 and i will never run out of occupancy
     * 
     * */
    int ans;
    if(sum-v[0]<v[0])
    {
        cout<<2*v[0]<<endl;return 0;
    }
    cout<<sum<<endl;

}