#include <bits/stdc++.h>
using namespace std;

void print(char x, char y) {
	cout << x << " -> " << y << endl;
}
void backtrack(int i, char a, char b, char c) {
	if (i==1) 
		print(a,c);
	else {
		backtrack(i-1, a, c, b);
		print(a,c);
		backtrack(i-1, b, a, c);
	}
}
int main () {
	int n;
	cin >> n;
	char a='A', b='B', c='C';
	backtrack(n,a,b,c);
}