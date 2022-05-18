#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1, n, m, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k;
        vector<int> a(n), b(m), res(n + m);
        for(int &i : a) 
			cin >> i;
        for(int &i : b) 
			cin >> i;
        merge(a.begin(), a.end(), b.begin(), b.end(), res.begin());
        cout << res[k - 1] << endl;
    }
    return 0;
}