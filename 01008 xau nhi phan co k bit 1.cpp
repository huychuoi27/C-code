#include <bits/stdc++.h>
using namespace std;
int n, B[25], check, k;
void in () {
	for (int i=1; i<=n; i++) 
		cout << B[i];
	cout << endl;
}
int kiemtra() {
	int t = 0, i;
	for (i = 1; i <= n; i++) 
		t += B[i];
	return(t==k);
}
void sinh() {
	int i = n;
	while(B[i]) {
		B[i] = 0; 
		i--;
	}
	if(i==0) 
		check = 1;
	else B[i]=1;
}
main () {
	int t; 
	cin >> t;
	while (t--) {
		cin >> n >> k; 
		check = 0;
		for (int i=1; i<=n; i++) 
			B[i] = 0;
		while (!check) {
			if (kiemtra()) 
				in();
			sinh ();
		}
		cout << endl;		
	}

}
