#include <bits/stdc++.h> 
using namespace std;

int dem(int a[], int n, int x) {
	int count = 0; 
	for(int i = 0; i < n; i++) 
		if(a[i] == x)
			count++;
	if(count == 0) 
		return -1;
	else return count;
}

int main() {
	int a[10000], n, t, x;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		cout << dem(a, n ,x) << endl;
	}
}
