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
int main()
{
    int t = 1;
    cin >> t;
    string a, b;
    while(t--)
    {
        cin >> a >> b;
        int dp[a.size() + 1][b.size() + 1];
        for(int i = 0; i <= b.size(); ++i) 
			dp[0][i] = 0;
        for(int i = 0; i <= a.size(); ++i) 
			dp[i][0] = 0;
        for(int i = 0; i < a.size(); ++i)
        {
            for(int j = 0; j < b.size(); ++j)
            {
                if(a[i] == b[j]) 
					dp[i + 1][j + 1] = dp[i][j] + 1;
                else dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
        cout << dp[a.size()][b.size()] << endl;
    }
    return 0;
}