#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n) {
	for(int i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << endl;
}
bool check(int a[], int n, int k) {
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] == 1) {
			count++;
		}
	}
}

	
void Try(int a[], int n, int k, int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n-1) {
			printArray(a, n);
			}
			else { 
				Try(a, n, k, i+1);
			}
		}
	}
	
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		Try(a, n, k, 0);
	}
}
