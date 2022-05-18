#include<bits/stdc++.h>
using namespace std;
/*
int minSum(int a[], int n)
{
  	priority_queue <int, vector<int>, greater<int> > pq;
	string num1, num2;
	for(int i=0; i<n; i++)
        pq.push(a[i]);
 	while(!pq.empty()) {
       	num1+=(48 + pq.top());
        pq.pop();
        if(!pq.empty()) {
            num2+=(48 + pq.top());
            pq.pop();
        }
    }
 	int n1 = atoi(num1.c_str());
    int n2 = atoi(num2.c_str());
	return n1+n2;
}
 
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		cout<< minSum(a, n) << endl;
	}
}
*/ 


int n;
int main () {
	int t; 
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		sort (a, a+n);
		long long so1=0, so2=0;
		for (int i=0; i<n; i++) {
			if (i%2==0) so1=so1*10+a[i];
			else so2=so2*10+a[i];
		}
		cout << so1+so2 << endl;	
	}
}

