#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		for(int i = 0; i < m; i++)
			cin >> b[i];
		int c[n+m];
		copy(a, a+n, c);
		copy(b, b+m, c+n);
		sort(c, c+n+m);
		for(int i = 0; i < (n+m); i++)
			cout << c[i] << " ";
		cout << endl;
	}
}
