#include <bits/stdc++.h>
using namespace std;
int n, A[10][10], OK; char C[1000];
void in (int k) {
	for (int i=0; i<k; i++) cout << C[i];
	cout << " ";
}
void quaylui (int i, int j, int k) {
	if (i==n-1 && j==n-1) {
		in(k); 
		OK=1; 
	}
	if (i+1 < n && A[i+1][j]) {
		C[k]='D';
		A[i+1][j]=0; 
		quaylui(i+1,j,k+1);
		A[i+1][j]=1;
	}
	if (j+1 < n && A[i][j+1]) {
		C[k]='R';
		A[i][j+1]=0; 
		quaylui(i,j+1,k+1);
		A[i][j+1]=1;
	}	
}
main () {
	int t, i, j; 
	cin >> t;
	while (t--) {
		cin >> n;
		OK=0;
		for (i=0; i<n; i++) 
			for (j=0; j<n; j++) cin>>A[i][j];
		if (A[0][0]&&A[n-1][n-1]) {
			A[0][0]=0;
			quaylui(0,0,0);
		}
		if (!OK) cout << "-1";
		cout << endl;
	}
}

