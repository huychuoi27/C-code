#include <bits/stdc++.h>
using namespace std;
int M=1e9+7, n;
struct Matran {
	long long f[15][15];
};
Matran operator* (Matran A, Matran B) {
	Matran C;
	int i, j, k;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			C.f[i][j]=0;
			for (k=0; k<n; k++) {
				C.f[i][j]=(C.f[i][j]+A.f[i][k]*B.f[k][j]%M)%M;
			}
		}
	}
	return C;
}
Matran powMod (Matran A, int n) {
	if (n==1) return A;
	Matran X=powMod (A,n/2);
	if (n%2==0) return X*X;
	return A*X*X;
}
main () {
	int t, i, j, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		Matran A;
		for (i=0; i<n; i++) for (j=0; j<n; j++) cin >> A.f[i][j];
		Matran KQ=powMod(A,k);
		long long x=0;
		for (i=0; i<n; i++) {
			x=(x+KQ.f[i][n-1])%M;
		}
		cout << x << endl;
	}
}
 