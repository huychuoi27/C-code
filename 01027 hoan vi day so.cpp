#include <bits/stdc++.h>
using namespace std;
int A[15], C[10000], n, OK;
void in () {
		for (int i=1; i<=n; i++) cout << C[A[i]] << " ";
		cout << endl;
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
	int i;
	cin >> n ; OK=0;
	for ( i=1; i<=n; i++) {
			cin >> C[i];
			A[i]=i;
	}
	sort (C+1, C+n+1);
	while (!OK) {
		in();
		sinh ();
	}		
}

 