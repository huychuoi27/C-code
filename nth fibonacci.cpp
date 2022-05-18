#include <bits/stdc++.h>
using namespace std;

long long fibo_array(int n) {
	vector<long long> f;
	f.push_back(0);
	f.push_back(1);
	for(int i = 2; i <= n; i++) {
		long long next_number = f[i-1] + f[i-2];
		f.push_back(next_number);
	}
	return f[n];
}

int main() {
	int n;
	cin >> n;
	cout << fibo_array(n) << endl;
}

