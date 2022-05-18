#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1, n, m, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        vector<vector<int>> ans;
        for(int &i : a) cin >> i;
        for(int i = 0; i < n - 1; ++i)
        {
            for(int j = i + 1; j < n; ++j) if(a[i] > a[j]) swap(a[i], a[j]);
            vector<int> v(n);
            for(int z = 0; z < n; ++z) v[z] = a[z];
            ans.push_back(v);
        }
        for(int i = ans.size(); i; --i)
        {
            cout << "Buoc " << i << ": ";
            for(int j : ans[i - 1]) cout << j << ' ';
            cout << endl;
        }
    }
    return 0;
}