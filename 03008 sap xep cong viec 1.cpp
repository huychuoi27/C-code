#include <bits/stdc++.h>
using namespace std;

struct task {
	int start, finish;
};

bool cmp(task a, task b) {
	return a.finish < b.finish;
}

int main() {
	int test;
	cin >> test;
	while(test--) {
		int n;
		cin >> n;
		task t[n];
		for(int i = 0; i < n; i++) 
			cin >> t[i].start;
		for(int i = 0; i < n; i++) 
			cin >> t[i].finish;
		sort(t, t+n, cmp);
		int ans = 1, i = 0, j = 1;
		for(int j = 1; j < n; j++) {
			if(t[i].finish <= t[j].start) {
				ans++;
				i = j;
			}
		}
		cout << ans << endl;
	}
}
