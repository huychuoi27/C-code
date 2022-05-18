#include <bits/stdc++.h>
using namespace std;

int n, B[25],check;
void in() {
	for (int i=1; i<=n; i++) 
	{
		if (B[i]==0) 
			cout << 'A';
		else cout << 'B';
	}
	cout << " ";
}
void sinh() {
	int i=n;
	while (B[i]) {
		B[i]=0; 
		i--;
	}
	if (i==0) 
		check=1;
	else B[i] = 1;
}
main () {
	int t; cin >> t;
	while (t--) {
		cin >> n; 
		check = 0;
		for (int i=1; i<=n; i++) 
			B[i]=0;
		while (!check) {
			in();
			sinh();
		}
		cout << endl;		
	}

}
