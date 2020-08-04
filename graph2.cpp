#include<bits/stdc++.h>
using namespace std;
string ans="";
int x
int main()
{
	int n,m;
	cin>>n>>m;
	vector<string> s(n);
	int cnt=0;
	int x,y;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='A')
			{
			x=j,y=i;break;	
			}
		}
	}
	queue<pair<int,int>> bfs;
	bfs.push({x,y});
	vector<vector<int>> dis(n,vector<int>(m,0)) dis;
	while(not bfs.empty())
	{
	auto top=bfs.front();
	bfs.pop();
	s[top.second][top.first]='#';
	if()
	
	
	}
	if(ans.size()==0)
	{cout<<"NO\n";}
	cout<<cnt<<endl;
	
	
}
