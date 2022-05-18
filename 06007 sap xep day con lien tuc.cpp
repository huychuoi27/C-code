#include <bits/stdc++.h>
using namespace std;
void nhap ( int a[], int n, int b[]) {
	for (int i=0; i<n; i++){
		cin >> a[i];
		b[i]=a[i];
	}
}
void xuli( int a[], int n, int b[] ){
	sort (b, b+n);
	int i=0,k=n-1;
	while (b[i]==a[i] && i<n) i++;
	cout << i+1 << " ";
	while (b[k]==a[k]&& k>1) k--;
	cout << k+1 << endl;
}
int a[1000000]; int b[1000000];
int main (){
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		nhap (a, n, b);
		xuli (a, n, b);
		cout << endl;
	}
}
