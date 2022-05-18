#include <bits/stdc++.h> 
using namespace std;
void input(int a[], int n) {
	for (int i=0; i<n; i++) 
		cin >> a[i];
}
int a[100000];
int main () {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		input(a, n);
		int b[100000]={}, check=1;
		for (int i=0; i<n; i++) {
			b[a[i]]++;
			if (b[a[i]]>1) {
				check=0;
				cout << a[i];
				break;
			}
		}
		if(check) 
			cout << "NO";
		cout << endl;
	}
}
