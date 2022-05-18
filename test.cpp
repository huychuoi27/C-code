#include <bits/stdc++.h> 
using namespace std;

int maxSum(int a[], int n) {
	int count_left[n] = {0}, count_right[n] = {0};
	stack<int> q;
	for(int i = 0; i< n; i++) {
		while(q.size() != 0 && a[q.top()] <= a[i]) {
			count_left[i] += count_left[q.top()] +1;
			q.pop();
		}
		q.push(i);
	}
	
	while(q.size() != 0) 
		q.pop();
		for(int i = n-1; i>= 0; i--) {
			while(q.size() != 0 && a[q.top()] < a[i]) {
				count_right[i] += count_right[q.top()] +1;
				q.pop();
			}
			q.push(i);
		}
		
	while(q.size() != 0) 
		q.pop();
	
	int ans = 0;
	for(int i = 0; i < n; i++) 
		ans += (count_left[i]+1) * (count_right[i]+1) * a[i];
		return ans;
	}
	
int main() {
	int t;
	cin >> t; 
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		int size = sizeof(a) / sizeof(a[0]);
		cout << maxSum(a, n);
		cout << endl;
	}
}

		