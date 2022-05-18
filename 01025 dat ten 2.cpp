#include <bits/stdc++.h>
using namespace std;
int n, check, k, C[35];
void in () {
		for (int i=1; i<=k; i++) 
			cout << (char)(64 + C[i]) ;
		cout << endl;;
}
void sinh () {
	int i, j;
	i=k;
	while (C[i]==n-k+i) 
		i--;
	if (i == 0 ) 
		check = 1;
	else {
		C[i]++;
		for (j=i+1; j<=k; j++) 
			C[j]=C[j-1]+1;
	}
}
main () {
	int t; 
	cin >> t;
	while (t--) {
		cin >> n >> k; 
		check = 0;
		for (int i=1; i<=k; i++) 
			C[i]=i;
		while (!check) {
			in();
			sinh ();
		}	
	}
}
