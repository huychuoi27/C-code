#include <bits/stdc++.h>
using namespace std;

void input(long long a[], long long n) {
	for(int i = 0; i < n; i++) 
		cin >> a[i];
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, m;
		cin >> n >> m;
		long long a[n], b[m];
		input(a, n);
		input(b, m);
		sort(a, a+n);
		sort(b, b+m);
		cout << a[n-1]*b[0] << endl;
	}
}
