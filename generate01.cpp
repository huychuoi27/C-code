#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n, int X[]) {
	for(int i = 0; i < n; i++) 
		cout << X[a[i]] << " ";
	cout << endl;
}

void generate(int n, int k, int X[]) {
	int a[k];
	for(int i = 0; i < k; i++) {
		a[i] = i+1;
	}
	bool has_next = true;
	while(has_next) {
		printArray(a, k, X);
		int i = k-1;
		while(i >= 0 && a[i] == (n - k + i + 1)) {
			i--;
		}
		if(i >= 0) {
			a[i]++;
			for(int j = i+1; j < k; j++) {
				a[j] = a[j-1] +1;
			}
		} else { 
			has_next = false;
		}
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	set <int> s;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	int X[s.size() + 1];
	int j = 0;
	for(set<int>::iterator i = s.begin(); i != s.end(); i++) {
		X[j+1] = *i;
		j++;
	}
	generate(s.size(), k, X);
	cout << endl;
	}
	

