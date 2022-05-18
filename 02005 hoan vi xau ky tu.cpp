#include <iostream>
using namespace std;
string s;
bool dd[25];
int res[25];
 
void in (int n) {
    int i;
    for (i=1; i<=n; i++)
        cout << s[res[i]-1];
    cout << " ";
}
void re(int i, int n) {
    int j;
    if (i>n) {
        in(n);
    }
    else {
        for (j=1; j<=n; j++) {
            if (dd[j]==false) {
                dd[j]=true;
                res[i]=j;
                re(i+1,n);
                dd[j]=false;
            }
        }
    }
}
int main() {
    int t, i;
	cin >> t;
	while (t--) {
		cin >> s;
		int n=s.size();
        for (i=1; i<=3; i++) dd[i]=false;
        re(1,n);
        cout << endl;
    }
}
