#include <bits/stdc++.h>
using namespace std;

int n, m, A[100][100], cnt;
void backtrack(int i, int j) {
	if (i==n && j==m) {
		cnt++;
		return;
	}
	if (i+1 <= n) 
		backtrack(i+1,j);
	if (j+1 <= m) 
		backtrack(i, j+1);
}
int main () {
	int t, i, j; 
	cin >> t;
	while (t--) {
		cnt = 0;
		cin >> n >> m;
		for (i=1; i<=n; i++) 
			for (j=1; j<=m; j++) 
				cin>>A[i][j];
		backtrack(1,1);
		cout << cnt << endl;
	}
}
