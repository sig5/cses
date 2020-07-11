#include<bits/stdc++.h>
using namespace std;
const long long int mod=(long long int)1e9+7;
//vector<vector<long long int>> dp(1000,vector<long long int>(1000,nax));
long long int nax=(long long int)(1e9);
void add_self(long long int &a,long long int b)
{
    a+=b;
    if(a>mod)
    {
        a-=mod;
    }}

int main()
{
     int n, x;
  cin >> n >> x;
  vector<int> price(n), pages(n);
  for (int&v : price) cin >> v;
  for (int&v : pages) cin >> v;
  vector<vector<int>> dp(n+1,vector<int>(x+1,0));
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= x; j++) {
      dp[i][j] = dp[i-1][j];
      int left = j-price[i-1];
      if (left >= 0) {
	dp[i][j] = max(dp[i][j], dp[i-1][left]+pages[i-1]);
      }
    }
  }
  cout << dp[n][x] << endl;
    }
 

