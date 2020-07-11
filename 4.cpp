#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=(ll)(1e9+7);
int main()
{
	long long n=1;
	cin>>n;
	int a;
	cin>>a;
	int last=a;
	long long ans=0;
	for(int i=1;i<n;i++)
	{
		cin>>a;
		if(a>=last)
		last=a;
		else
		{
			ans+=a-last;
			
		}
		
	}
	cout<<ans;
}

