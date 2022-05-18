#include <bits/stdc++.h>

using namespace std;
int sum1(string a) {
	int m=0; 
	for (int i=0; i< a.size(); i++) {
		if (a[i]=='6') a[i]='5';
		m=m*10 + a[i]-'0';
	}
	return m;
}
int sum2(string a) {
	int m=0; 
	for (int i=0; i< a.size(); i++) {
		if (a[i]=='5') a[i]='6';
		m=m*10 + a[i]-'0';
	}
	return m;
}
main () {
	string a, b;
	cin >> a >> b;
	cout << sum1(a)+sum1(b) << " " << sum2(a)+sum2(b); 
}
