#include <bits/stdc++.h>
using namespace std;

void input(int a[], int n) {
	int i;
	for (i=0; i<n ;i++) cin >> a[i];
}
int main () {
	int a[100000], b[100000], n, m, t, i;
	cin >> t;
	while (t--) {
		set <int> s;
		set <int> c;
		cin >> n >> m;
		input(a, n);
		input(b, m);
		int k=-1;                 
		for (i=0; i<n ;i++) {       
		    s.insert (a[i]);	
		}
		for (i=0; i<m; i++) {
			s.insert (b[i]);
			if (n+i-s.size()!=k) {
				c.insert(b[i]);
				k++;
			}
		}
		for(int ca:s) cout << ca << " ";
		cout << endl;
		for(int cy:c) cout << cy << " ";
		cout << endl;
	}
}
