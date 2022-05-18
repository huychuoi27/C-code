#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int x ) {
	int l = 0, r = n-1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x) 
			return mid + 1;
		else if (a[mid] > x) 
			r = mid - 1;
			else l = mid + 1;
	}
	return -1;
}
int main () {
	int t, n, x;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; i++) 
			cin >> a[i];
		if (binarySearch(a, n, x) == -1) 
			cout << "NO";
		else cout << binarySearch(a, n, x);
		cout << endl;
	}
}
