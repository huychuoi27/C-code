#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		stack<int> st;
		for(int i = n-1; i >= 0; i--) {
			int length = 0;
			for(int j = i; j >= 0; j--) {
				if(a[j] <= a[i]) {
					length++;
				} else {
					break;
				}
			}
			st.push(length);
		} 
			while(!st.empty()) {
				cout << st.top() << " ";
				st.pop();
			}
			cout << endl;
		}
	}
	