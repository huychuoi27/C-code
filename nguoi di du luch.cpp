#include <bits/stdc++.h>
using namespace std;

void Try(int a[], int n, int used[], int i) {
	for(int j = 1; j <= n; j++) {
		if(used[j]) {
			a[i] = j;
			cost = cost + C[a[i-1]][a[i]];
			used[j] = 1;
			if(i == n - 1) {
				fopt = min(fopt, cost + C[a[i]][1]);
			}
			else if(cost + (n-i-1)*cmin < fopt)
				Try(a, n, used, i+1);
			used[j] = 0;
			cost = cost -C[a[i-1]]a[i];
		}
	}
}

int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		for(int j =i; j <= n; j++) {
			cin >> C[i][j];
			if(i != j) {
				cmin = min(C[i][j], cmin);
			}
		}
	}
	int a[n];
	int used[n+1] = {0};
	a[0] = 1;
	used[1] = 1;
	Try(a, n, used, 1);
	cout << fopt;
}
