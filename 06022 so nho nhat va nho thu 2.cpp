#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[10000], n, t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < n; i++)	
			cin >> a[i];
		sort(a, a+n);
		if(a[0] == a[1]) 
			cout << "-1";
		else cout << a[0] << " " << a[1];
		cout << endl;
	}
}
