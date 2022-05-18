#include <bits/stdc++.h>
using namespace std;
int n, k, C[45];
set <int> s;
void sinh() {
	int i, j;
	i=k;
	while (i>0 && C[i]==n-k+i) 
		i--;
	if (i == 0 ) {
		cout << k;
	}
	else {
		C[i]++;
		for (j=i+1; j<=k; j++) 
			C[j]=C[j-1]+1;
		for (int i=1; i<=k; i++) 
			s.insert (C[i]);
		cout << s.size()-k;
	}
}
main () {
	int t,i;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for ( i=1; i<=k; i++)  {
			cin >> C[i];
			s.insert (C[i]);
		}
		sinh();
		s.clear();
		cout << endl;		
	}
}
