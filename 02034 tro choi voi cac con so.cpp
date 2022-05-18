#include <iostream>
using namespace std;
int n;
bool dd[25];
int res[25];
 
void print() {
    int i, check=0;
    for (i=1; i<n; i++)
        if (abs(res[i]-res[i+1])==1) {
			check=1; 
			break; 
		}
    if (!check) {
		for (i=1; i<=n; i++) 
			cout << res[i];
    	cout << endl;
    }
}
void re(int i) {
    int j;
    if (i>n) {
        print();
    }
    else {
        for (j=1; j<=n; j++) {
            if (dd[j]==false) {
                dd[j]=true;
                res[i]=j;
                re(i+1);
                dd[j]=false;
            }
        }
    }
}
int main() {
    int t, i;
	cin >> t;
	while (t--) {
		cin >> n;
        for (i=1; i<=3; i++) 
			dd[i]=false;
        re(1);
        cout <<" ";
    }
}

/* 
1

4
*/
