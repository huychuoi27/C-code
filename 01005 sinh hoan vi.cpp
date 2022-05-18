#include <bits/stdc++.h>
using namespace std;

int A[15], n, check;
void in () {
		for (int i=1; i<=n; i++) 
			cout << A[i] ;
		cout << " ";
}
void sinh() {
	int i=n-1, j;
	while (A[i] > A[i+1]) 
		i--;
	if (i == 0 ) 
		check = 1;
	else {
		j = n;
		while (A[j] < A[i]) j--;
		swap (A[i], A[j]);
		int d = i+1, 
		c = n;
		while(d < c) {
			swap(A[d], A[c]);
			d++; 
			c--;
		}
	}
}
main () {
	int t,i;
	cin >> t;
	while (t--) {
		cin >> n ; check = 0;
		for ( i=1; i<=n; i++) A[i]=i;
		while (!check) {
			in();
			sinh ();
		}
		cout << endl;		
	}
}
