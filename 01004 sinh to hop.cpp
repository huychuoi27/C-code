#include <bits/stdc++.h>
using namespace std;
int n, OK, k, C[35];
void in () {
		for (int i=1; i<=k; i++) cout << C[i] ;
		cout << " ";
}
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
main () {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k; OK=0;
		for (int i=1; i<=k; i++) C[i]=i;
		while (!OK) {
			in();
			sinh ();
		}
		cout << endl;		
	}
}
