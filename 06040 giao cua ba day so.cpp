#include <bits/stdc++.h>
using namespace std;
void nhap (long long a[], int n) {
	for (int i=0; i<n; i++) cin >> a[i];
}
main () {
	int t, n, m, p;
	cin >> t;
	while (t--) {
		cin >> n >> m >> p; 
		long long a[n], b[m], c[p];
		nhap (a,n); nhap (b,m); nhap(c,p);
		vector <long long> v;
		int i=0, j=0, k=0;
		while (i<n && j<m && k<p) {
			if (a[i]==b[j] && b[j]==c[k]) {
				v.push_back(a[i]); 
				i++; j++; k++;
			}
			else if (a[i] <= b[j] && a[i] <= c[k]) i++;
			else if (b[j] <= a[i] && b[j] <= c[k]) j++;
			else k++;
		}
		if (v.size()==0) cout << "-1" ;
		else for (long long x:v) {
			cout << x << " ";
		}
		cout << endl;
	}
}
