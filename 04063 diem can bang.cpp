#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--)	{
		cin >> n;
		int a[n], s=0, k=0, tim=-1, i;
		for (i=0; i<n; i++) {
			cin >> a[i];
			s+=a[i];
		}
		for (i=0; i<n; i++)	{
			if (k*2+a[i] == s) {
				tim=i+1;
				break;
			}
			k+=a[i];
		}
		cout << tim << endl;
	}
}
