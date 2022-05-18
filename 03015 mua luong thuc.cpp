#include <bits/stdc++.h>
using namespace std;
void dayCount(int n, int s, int m)
{
    if (((n * 6) < (m * 7) && s > 6) || m > n)
        cout << "-1";
    else {
        int day = (m * s) / n;
        if (((m * s) % n) != 0)
            day++;
        cout << day;
    }
}
 
int main()
{
    int t;
	cin >> t;
	while(t--) {
		int n, s, m;
		cin >> n >> s >> m;
		dayCount(n, s, m);
		cout << endl;
	}
}

/*
2
16 10 2
20 10 30
*/