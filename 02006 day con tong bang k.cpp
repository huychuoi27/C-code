#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],x[100],ok;
void in (int m) {
	cout << "[";
	for (int i=0; i<m; i++) cout << x[i] << " ";
	cout << x[m] << "] ";
}
void quaylui (int s, int i,int sum ) {
	int j;
	for (j=s+1; j<=n; j++) {
		if (sum+a[j]==k) {
			ok=1;
			x[i+1]=a[j];
			in (i+1);
			return;
		}
		else if (sum +a[j]<k) {
			x[i+1]=a[j];
			quaylui (j, i+1, sum+a[j]);
		}
	}
}
int main(){
	int t; 
	cin>>t;
	while(t--){
		cin >> n >> k; ok=0;
		for (int i=1; i<=n; i++) {
			cin >> a[i];
		}
		sort(a+1, a+n+1);
		quaylui(0,-1,0);
		if (!ok) cout << "-1";
		cout << endl;		
	}
}
