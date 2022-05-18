#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        int ans = INT_MAX;
        for(int i = 1; i < n; ++i) ans = min(ans, a[i] - a[i - 1]);
        cout << ans << endl;
    }
    return 0;
}
