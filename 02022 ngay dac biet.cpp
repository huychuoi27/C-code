#include <bits/stdc++.h>
using namespace std;
int n=8, check=0, B[25]={0};
void print() {
	if ((B[1]==0&&B[2]==0)||B[5]!=1) 
		return;
	if (B[3]==0&&B[4]==1) 
	for (int i=1; i<=n; i++) {
		if (B[i]==0) cout << "0"; 
			else 
				cout << "2";
		if (i==2||i==4) 
			cout << "/";
		if (i==n) 
			cout << endl;
	}
}
void generate() {
	int i=n;
	while (B[i]) {
		B[i]=0; 
		i--;
	}
	if (i==0) 
		check=1;
	else B[i]=1;
}
int main () {
	while (!check) {
		print();
		generate();
	}
}
