#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1, n, s;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        int a[n];
        for(int &i : a) 
			cin >> i;
        bitset<40005> dp;
        dp[0] = 1;
        for(int i = 0; i < n; ++i)
            for(int j = s; j >= a[i]; --j)
                if(dp[j - a[i]])
                    dp[j] = 1;
        if(dp[s]) 
			cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}