#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;
typedef long long ll;
ll const N = 1e5 + 5, M = 1e2 + 5;
ll n, m;
ll dp[N][M];
ll a[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    if (a[1] == 0)
        for (int i = 1; i <= m; i++)
            dp[1][i] = 1;
    else
        dp[1][a[1]] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            if (a[i] == 0 || j == a[i])
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]) % mod;
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += dp[n][i];
        ans %= mod;
    }
    cout << ans;

}