#include <bits/stdc++.h>
using namespace std;
int n, k, check = 0, B[25]={0}, a[25], dem=0;
void in () {
	int i, sum = 0;
	for (i=1; i<=n; i++) {
		sum += a[i]*B[i];
	}
	if (sum == k) {
		dem++;
		for (i=1; i<=n; i++) 
			if (B[i]==1) 
				cout << a[i]<< " ";
		cout << endl;
	}
}
void sinh() {
	int i=n;
	while (B[i]) {
		B[i]=0; 
		i--;
	}
	if (i==0) 
		check = 1;
	else B[i]=1;
}
main () {
	cin >> n >> k;
	for (int i=1; i<=n; i++) 
		cin >> a[i];
	while (!check) {
		in();
		sinh();
	}
	cout << dem;
}
