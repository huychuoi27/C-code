#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, x, s, k;
	map <int, int> m;
	cin >> t;
	while (t--) {
		cin >> n;
		s=0; k=0;
		for (int i = 0; i < n; i++)	{
			cin >> x;
			m[x]++;
		}
		for (auto i : m) {
			if (i.second > s) {
				s = i.second;
				k = i.first;
			}
		}
		if (s > (float) n / 2) cout << k;
		else cout << "NO";
		cout << endl;
		m.clear();
	}
}
 