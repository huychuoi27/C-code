#include<bits/stdc++.h>

using namespace std;


#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)


const long long int mod = 1e9 + 7;

inline long long solve(int n, int k)
{
    vector<long long int> invert(k + 5, 0);
    invert[0] = 1;
    if(k + 1 >= 2) invert[1] = 1;
    FOR(i, 2, k) invert[i] = mod - (mod / i) * invert[mod % i] % mod;
    int res = 1;
    FOR(i, 2, k) res = ((res % mod) * (invert[i] % mod)) % mod;
    long long ed = n - k + 1;
    FORD(i, n, ed) res = ((res % mod) * (i % mod)) % mod;
    return res;
}

int main()
{
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}