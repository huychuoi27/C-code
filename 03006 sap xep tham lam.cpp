#include <bits/stdc++.h>
using namespace std;
 
bool greedySort(int a[], int n)
{
    int cp[n];
	copy(a, a + n, cp);
 	sort(cp, cp + n);
 	for(int i = 0; i < n; i++) {
		if (!(a[i] == cp[i]) && !(a[n - 1 - i] == cp[i]))
            return false;
    }
 	return true;
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
		if (greedySort(a, n))
       		cout << "Yes";
    	else
       		cout << "No";
       	cout << endl;
 	}
}
/*
2
7
1 6 3 4 5 2 7
7
1 6 3 4 5 7 2
*/