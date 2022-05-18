#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
Z
long long powMod (long long n, long long k) {
	if (k==0) 
		return 1;
	long long x=powMod(n, k/2);
	if (k%2==0) 
		return x*x%M;
	return n*(x*x%M)%M;
}
long long rev(long long n) {
	long long d=0;
	while (n>0) {
		d=d*10+n%10;
		n/=10;
	}
	return d;
}
int main () {
	int t; 
	long long n;
	cin >> t;
	while (t-- ) {
		cin >> n ;
		cout << powMod (n,rev(n)) << endl;
	}
}
 