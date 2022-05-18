#include <bits/stdc++.h>
using namespace std;
bool triplet(int A[], int n, int sum)
{
    for (int i = 0; i < n - 2; i++)
    {
 
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (A[i] + A[j] + A[k] == sum)
                {
                    return true;
                }
            }
        }
}
    return false;
}
 

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, sum;
		cin >> n>> sum;
		int A[n];
		for(int i = 0; i < n; i++) 
			cin >> A[i];
   	 	if(triplet(A, n, sum))
   	 		cout << "YES";
   	 	else cout << "NO";
    	cout << endl;
}
}