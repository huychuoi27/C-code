#include <bits/stdc++.h>
using namespace std;
int A[15], C[15], dem, n, OK;
int kiemtra () {
	for (int i=1; i<=n; i++) {
		if (A[i]!=C[i]) return 0;
	}
	return 1;
}
void sinh () {
	int i=n-1, j;
	while (A[i]>A[i+1]) i--;
	if (i == 0 ) OK=1;
	else {
		j=n;
		while (A[j]<A[i]) j--;
		swap (A[i],A[j]);
		int d=i+1, c=n;
		while (d<c) {
			swap(A[d],A[c]);
			d++; c--;
		}
	}
}
main () {
	int t,i;
	cin >> t;
	while (t--) {
		cin >> n; OK=0, dem=0;
		for (int i=1; i<=n; i++) {
			cin >> C[i];
			A[i]=i;
		}
		while (!OK) {
			dem++;
			if (kiemtra()) {
				cout << dem << endl;
				break;
			}
			sinh ();
		}	
	}
}

