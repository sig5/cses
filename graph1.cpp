#include<bits/stdc++.h>
using namespace std;
void dfs(int x,int y,int n,int m,vector<string> &s)
{
	s[x][y]='#';
	if(x>0 and s[x-1][y]=='.')
	dfs(x-1,y,n,m,s);
	if
	(x<n-1 and s[x+1][y]=='.')
	dfs(x+1,y,n,m,s);
	if(y>0 and s[x][y-1]=='.')
	dfs(x,y-1,n,m,s);
	if(y<m-1 and s[x][y+1]=='.')
	dfs(x,y+1,n,m,s);
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<string> s(n);
	int cnt=0;
	for(int i=0;i<n;i++) cin>>s[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='.')
			{
				dfs(i,j,n,m,s);
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	
	
}
