#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=(ll)(1e9+7);
int main()
{
	long long n;
	cin>>n;
	if(n==1)
	{
		cout<<1<<" ";return 0;
	}
	if(n<4)
	{cout<<"NO SOLUTION";
return 0;}
if(n==4)
{
	cout<<2<<" "<<4<<" "<<1<<" "<<3;return 0; 
}
vector<int> v(n);
int i;
for( i=0;2*i+1<=n;i++)
{
	v[i]=2*i+1;
	cout<<v[i]<<" ";
}
for(int j=1;2*j<=n;i++,j++)
{
	v[i]=2*j;
	cout<<v[i]<<" ";
}



}


