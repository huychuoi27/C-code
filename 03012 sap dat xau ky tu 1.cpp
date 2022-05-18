#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int cnt[26] = {0};
		for(int i = 0; i < s.size(); i++) {
			cnt[s[i] - 'a']++;
		}
		sort(cnt, cnt+26, greater<int>());
		int maxval = cnt[0];
		if(s.length() - maxval >= maxval-1) {
			cout << 1;
		}
		else {
			cout << -1;
		}
		cout << endl;
	}
}

			