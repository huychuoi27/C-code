#include <bits/stdc++.h>
using namespace std;
int n, OK, dem, k, C[35], A[35];
void sinh () {
	int i, j;
	i=k;
	while (C[i]==n-k+i) i--;
	if (i == 0 ) OK=1;
	else {
		C[i]++;
		for (j=i+1; j<=k; j++) C[j]=C[j-1]+1;
	}
}
int kiemtra () {
	for (int i=1; i<=k; i++) {
		if (A[i]!=C[i]) return 0;
	}
	return 1;
}
main () {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k; OK=0, dem=0;
		for (int i=1; i<=k; i++) {
			cin >> A[i];
			C[i]=i;
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
