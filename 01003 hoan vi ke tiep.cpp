#include <bits/stdc++.h>
using namespace std;

int A[15], n;
void sinh() {
	int i = n-1, j;
	while (A[i] > A[i+1]) 
		i--;
	if(i == 0) {
		for (int i=1; i<=n; i++) 
			cout << i << " ";
	}
	else {
		j=n;
		while (A[j]<A[i]) 
			j--;
		swap(A[i], A[j]);
		int d=i+1, 
		c=n;
		while (d<c) {
			swap(A[d],A[c]);
			d++; 
			c--;
		}
		for (int i=1; i<=n; i++) 
			cout << A[i] << " ";
	}
}
main () {
	int t,i;
	cin >> t;
	while (t--) {
		cin >> n ;
		for ( i=1; i<=n; i++) 
			cin >> A[i];
		sinh();
		cout << endl;	
	}
}
