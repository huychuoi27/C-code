#include<bits/stdc++.h>
using namespace std;
 /*
int max(int a[], int n)
{ 
  	sort(a, a + n);
 	int sum = 0;
 	for (int i = 0; i < n; i++)
    	sum += (a[i]*i);
 	return sum;
}
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
 	cout << max(a, n) << endl;
  	}
} */


int n, M=1e9+7;
int main () {
	int t; 
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		sort (a, a+n);
		int sum = 0;
		for (int i=0; i<n; i++) {
			sum= (sum+ i*a[i]%M)%M;
		}
		cout << sum << endl;	
	}
}

/* 
2
5
5 3 2 4 1
3
1 2 3
*/