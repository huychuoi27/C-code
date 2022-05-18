#include <bits/stdc++.h>
using namespace std;
int n, OK = 0, B[25]={0};
void in() {
	for (int i=1; i<=n; i++) {
		if (B[i]==1) 
			cout << 'H';
		else cout << 'A';
	}
	cout << endl;
}
int check() {
	if (B[1] == 0 || B[n] == 1) 
		return 0;
	for (int i = 1; i < n; i++) {
		if(B[i] == 1 && B[i+1] == 1) 
			return 0;
	}
	return 1;	
}
void sinh() {
	int i = n;
	while(B[i]) {
		B[i] = 0; 
		i--;
	}
	if(i==0) 
		OK=1;
	else B[i]=1;
}
main() {
	int t; 
	cin >> t;
	while (t--) {
		cin >> n; 
		OK = 0;
		for (int i = 1; i <= n; i++) 
			B[i]=0;
		while (!OK) {
			if (check ()) 
				in();
			sinh ();
		}
		cout <<endl;		
	}
}

