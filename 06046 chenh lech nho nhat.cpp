#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void nhap ( int a[], int n) {
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
}
void xuli ( int a[], int n ){
	sort (a, a+n);                 
	int min= abs (a[0]-a[1]);
	for (int i=1; i<n-1; i++){
		if (abs(a[i]-a[i+1]) < min) {
			min= abs(a[i]-a[i+1]);
		}
	}
	cout << min;
}
int a[100000];
int main (){
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		nhap (a, n);
		xuli (a, n);
		cout << endl;
	}
}
 