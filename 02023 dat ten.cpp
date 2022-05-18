#include <bits/stdc++.h>
using namespace std;
int  k, a[100];
string A[100];
void print() {
    int i;
    for (i=1; i<=k; i++)
        cout << A[a[i]]<< " ";
    cout << endl;
}
void search(int i, int n) {
	for (int j=a[i-1]+1; j<=n-k+i; j++) {
		a[i]=j;
		if (i==k) 
			print();
		else search(i+1,n);
	}
}
int main () {
	int n;
    cin >> n >> k;
    string s;
    set <string> st;
    for (int i=1; i<=n; i++) {
    	cin >> s;
    	st.insert(s);	
	}
	int z=0;
	for (string x:st) {
		z++;
		A[z]= x;
	}
	search(1, st.size());
}
