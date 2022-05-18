#include <bits/stdc++.h> 
using namespace std;

int maxSum(int a[], long long n) {
	
	int count_left[n] = {0}, count_right[n] = {0};
	stack<int> st;
	for(int i = 0; i< n; i++) {
		while(st.size() != 0 && a[st.top()] <= a[i]) {
			count_left[i] += count_left[st.top()] +1;
			st.pop();
		}
		st.push(i);
	}
	
	while(st.size() != 0) 
		st.pop();
		for(int i = n-1; i >= 0; i--) {
			while(st.size() != 0 && a[st.top()] < a[i]) {
				count_right[i] += count_right[st.top()] +1;
				st.pop();
			}
			st.push(i);
		}
		
	while(st.size() != 0) 
		st.pop();
	
	int kq = 0;
	for(int i = 0; i < n; i++) 
		kq += (count_left[i]+1) * (count_right[i]+1) * a[i];
		return kq;
}
	
int main() {
	int t;
	cin >> t; 
	while(t--) {
		long long n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		cout << maxSum(a, n) << endl;
	}
}

		