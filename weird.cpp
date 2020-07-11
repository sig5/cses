#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=(ll)(1e9+7);
int main()
{
	long long n;
	cin>>n;
	//unordered_map mp<int,int> mp;
	//cout<<n<<" ";
	while(n!=1)
	{cout<<n<<" " ;
		if(n%2==1)
		n=n*3+1;
		else
		n=n/2;
		
	}
	cout<<1<<" ";
	
}
//missing number
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=(ll)(1e9+7);
int main()
{
	long long int n,dummy=0;
	cin>>n;
	//unordered_map mp<int,int> mp;
	//cout<<n<<" ";
for(long long int i=0;i<n;i++)
dummy=dummy^(1+i);
long long int var=0;
for(int i=0;i<n-1;i++)
{long long  int a;
	cin>>a;
	var=var^a;	
}	
cout<<(var xor dummy);
}
