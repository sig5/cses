#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
   cin>>s;
    int n=s.length();

    unordered_map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    
    }
    int cnt=0;
    char p;
    for(char a='A';a<='Z';a++)
    {
        if(mp[a]&1)
        {cnt++; mp[a]--;p=a;}
        
    }
    if(cnt>1 or (cnt==1 and n%2==0) )
    {
        cout<<"NO SOLUTION\n";
        return;
    }
    string k;
    if(cnt==1)
    k.push_back(p);
    for(char i='A';i<='Z';i++)
    {
while(mp[i]--)
{
    k.push_back(i);
    mp[i]--;
    if(mp[i]<1)
    break;
    k.insert(0,i);
}
    }
    cout<<k<<endl;
}