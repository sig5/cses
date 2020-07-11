#include<bits/stdc++.h>
using namespace std;
const int mod=(int)1e9+7;
//vector<vector<int>> dp(1000,vector<int>(1000,nax));
int nax=(int)(1e9);
void add_self(int &a,int b)
{
    a+=b;
    if(a>mod)
    {
        a-=mod;
    }
}
int main()
{
    
   // int n;
    string s;
    cin>>s;
    vector<string> ans;
    sort(s.begin(),s.end());
    ans.push_back(s);
while(next_permutation(s.begin(),s.end()))
{ans.push_back(s);
}
cout<<ans.size()<<endl;;
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}

}
