#include <bits/stdc++.h>
using namespace std;
int n, a[100], col[100], d1[100], d2[100], c;

void backtrack(int i) {
	for (int j=1; j<=n; j++) {
		if (col[j]==1 && d1[i-j+n]==1 && d2[i+j-1]==1) {
			a[i]=j;
			col[j] = d1[i-j+n] = d2[i+j-1] = 0;
			if (i==n) 
				c++;
			else 
				backtrack(i+1);
			col[j] = d1[i-j+n] = d2[i+j-1] = 1;
		}	
	}
}
main () {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		c=0;
		for (int i=0; i<100; i++) 
			col[i] = d1[i] = d2[i] = 1;
		backtrack(1);
		cout << c << endl;
	}
}
