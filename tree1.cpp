#include<bits/stdc++.h>
using namespace std;
vector<int> parent(200005,0);
vector<int> g[200005];
unordered_map<int,int> visited;
void dfs(int v)
{
	for(int u:g[v])
	{
		if (not visited[u])
		{visited[u]=1;
			dfs(u);
			parent[v]+=1+parent[u];
			
		}
	}
	
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n+1);
	v[1]=1;
	for(int i=2;i<=n;i++)
	{cin>>v[i];
	g[v[i]].push_back(i);
	}
	parent.resize(n,0);
	dfs(1);
	for(int i=0;i<n;i++)
	cout<<parent[i+1]<<" ";
}
