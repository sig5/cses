#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int p,q;
    cin>>p>>q;
   if((2*p-q)%3!=0 and (2*q-p)%3!=0)
   {
cout<<"NO\n";return;
   }
   if((2*p-q)%3==0)
   {
       int k1=(2*p-q)/3;
       int k2=q-2*k1;
       if(k1>=0 and k2>=0 and k1<=p and k2<=q)
       {
           cout<<"YES\n";
           return;
       }
   }
   int c=p;
   p=q;
   q=c;
      if((2*p-q)%3==0)
   {
       int k1=(2*p-q)/3;
       int k2=q-2*k1;
       if(k1>=0 and k2>=0 and k1<=p and k2<=q)
       {
           cout<<"YES\n";
           return;
       }
   }
   cout<<"NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}