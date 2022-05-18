#include <bits/stdc++.h>
using namespace std;

int sumzero(int a[], int n) {
	int i, j, min_i, min_j, min, sum;
	min_i = 0;
	min_j = 1;
	min = a[0] + a[1];
	for(i = 0; i < n-1; i++) {
		for(j=i+1; j < n; j++) {
			sum = a[i] + a[j];
			if(abs(min) > abs(sum)) {
				min = sum;
				min_i = i;
				min_j = j;
			}
		}
	}
	return min;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cout << sumzero(a, n) << endl;
	}
}
