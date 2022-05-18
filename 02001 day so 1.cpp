#include <bits/stdc++.h>
using namespace std;
void in(int a[], int n) {
	cout << "[";
	for (int i=0; i<n-1; i++) {
		cout << a[i] << " ";
	}
	cout << a[n-1]<<"]";
}
main () {
	int t, i, j, n, a[10];
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i=0; i<n; i++) cin >> a[i];
		in(a,n); cout << endl;
		for (i=0; i<n-1; i++) {
			for (j=0; j<n-i-1; j++){
				a[j]=a[j]+a[j+1];
			}
			in(a,n-i-1);
			cout << endl;
		}
	}
}
