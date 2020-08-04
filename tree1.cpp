#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    queue<pair<int,int> q;
    map<pair<int,int>,int> vis;
    vector<vector<int>> ans(n,vector<int>(m,-1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='E')
            {bfs.push({i,j});
             ans[i][j]=0;}
        }
    }
    vis[q.front()]=1;
   
    while(not q.empty())
    {
        auto top=q.front();
        q.pop()
        int x=top.first;
        int y=top.second;
        if(not vis[{x+1,y}] and x+1<n and s[x+1][y]=='C')
        {
            vis[{x+1,y}]=1;
            ans[x+1][y]=ans[x][y]+1;
        }
         if(not vis[{x-1,y}] and x-1>=0 and s[x-1][y]=='C')
        {
            vis[{x-1,y}]=1;
            ans[x-1][y]=ans[x][y]+1;
        }
            if(not vis[{x,y-1}] and y-1>=0 and s[x][y-1]=='C')
        {
            vis[{x,y-1}]=1;
            ans[x][y-1]=ans[x][y]+1;
        }
          if(not vis[{x,y+1}] and y+1<m and s[x][y+1]=='C')
        {
            vis[{x,y+1}]=1;
            ans[x][y+1]=ans[x][y]+1;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)\
        cout<<ans[i][j];
    }
    
}
