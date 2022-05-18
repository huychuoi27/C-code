#include <bits/stdc++.h>
using namespace std;
void in(int a[],int  b[100][100], int n, int m) {	
	for (int i=n-1; i>=0; i--) {
		cout << "[";
		for (int j=0; j<n-i-1;j++){
			cout << b[i][j]<< " ";
		}
		cout << b[i][n-i-1]<<"] ";
	}
	
}
main () {
	int t, i, j, n, a[10], b[100][100];
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i=0; i<n; i++) {
			cin >> a[i];
			b[0][i]=a[i];
		}
		for (i=0; i<n-1; i++) {
			for (j=0; j<n-i-1; j++){
				a[j]=a[j]+a[j+1];
				b[i+1][j]=a[j];
			}
		}
		in(a,b,n,n-i-1);
		cout << endl;
	}
}
