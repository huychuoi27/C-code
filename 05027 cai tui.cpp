
#include<bits/stdc++.h>

using namespace std;
/*
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
*/
long long n, m, res;
long long dp[1005][1005];
pair<long long, long long> a[1005];

void solve()
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(j < a[i].first) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i].first] + a[i].second);
            res = max(res, dp[i][j]);
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        res = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; ++i) 
			cin >> a[i].first;
        for(int i = 1; i <= n; ++i) 
			cin >> a[i].second;
        solve();
        cout << res << endl;
    }
    return 0;
}
