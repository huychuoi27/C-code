#include <bits/stdc++.h>
using namespace std;

void process(int a[], int n) {
	sort(a, a+n);
	int min = abs(a[0] - a[1]);
	for(int i = 0; i < n-1; i++) {
		if(abs(a[i] - a[i+1]) < min) {
			min = abs(a[i] -a[i+1]);
		}
	}
	cout << min;
}

int a[10000];
int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) 
			cin >>a[i];
			process(a, n);
			cout << endl;
		}
	}
	
			