#include <bits/stdc++.h>
using namespace std;
main () {
	int t,n;
	int a[10]={1000,500,200,100,50,20,10,5,2,1};
	cin >> t;
	while (t--){
		cin >> n;
		int i=0,to=0;
		while (n!=0 && i<10){
			while (n-a[i] >= 0) {
			    to++;
			    n = n-a[i];
			} 
		    i++;
		}
		cout << to << endl;
	}
}
 