#include<bits/stdc++.h>

using namespace std;
/*
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
*/
inline int binSearch(vector<long long> &a, vector<long long> &b)
{
    int l = 0, r = a.size() - 2, mid, res;
    while(l <= r)
    {
        mid = (l + r) >> 1;
        if(a[mid] != b[mid])
        {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main()
{
    int t = 1, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<long long> a(n), b(n - 1);
        for(long long &i : a) 
			cin >> i;
        for(long long &i : b) 
			cin >> i;
        if(a[0] != b[0]) cout << 1 << endl;
        else if(a.back() != b.back()) 
			cout << n << endl;
        else cout << binSearch(a, b) + 1 << endl;
    }
    return 0;
}