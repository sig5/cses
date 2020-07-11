#include<bits/stdc++.h>
using namespace std;
int main()
{long long n;
cin>>n;
vector<int> v(n+1);
for(long long i=0;i<n;i++) cin>>v[i];
set<int> s;
long long i=0,j=1;
s.insert(v[0]);
long long ans=1,answer=0;
while(i<v.size()-1 and j<v.size())
{ answer=max(ans,answer);
    if(s.find(v[j])==s.end())
    {
        ans++;
        s.insert(v[j++]);
    }
    else
    {
        //answer=max(ans,answer);
        s.erase(v[i++]);
    ans--;
    }
    
}
 cout<<answer<<endl;
}