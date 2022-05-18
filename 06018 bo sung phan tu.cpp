#include <bits/stdc++.h>

using namespace std;

void input(int a[], int n) {
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
}
void process(int a[], int n ){
	sort (a, a+n);
	int k = 0;
	for (int i = 0; i < n-1; i++){
	    if (a[i+1] - a[i] != 0 && a[i+1] - a[i] != 1){
	    	k += a[i+1] - a[i] -1;
		}
	}
	cout << k ;	
}
int a[1000];
int main (){
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		input(a, n);
		process(a, n);
		cout << endl;
	}
}
