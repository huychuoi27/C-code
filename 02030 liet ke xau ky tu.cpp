#include <bits/stdc++.h>
using namespace std;

int  k, a[100], n;
char s;
void print() {
    int i;
    for (i=1; i<=k; i++)
        cout << 
			(char)(64+a[i]);
    cout << endl;
}
void search(int i, int x ){
	for (int j=x; j<=n; j++) {
		a[i]=j;
		if (i==k) 
			print();
		else 
			search(i+1, j);
	}
}
int main () {
    cin >> s >> k;
  	n=(int)s-'A'+1;
	search(1,1);
}
