#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=(ll)(1e9+7);
int main()
{
	long long ans=1;;
	string s;
	cin>>s;
	long long int cnt=1;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		cnt++;
		else
		{
			cnt=1;
		}
		ans=max(ans,cnt);
		
	}
	cout<<ans<<endl;
}
