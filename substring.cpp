// C++ implementation
#include <bits/stdc++.h>
using namespace std;
  
// Function to print the
// unique sub-string of length n
string result(string s, int n) 
{
    // set to store the strings
    unordered_set<string> st;
  
    for (int i = 0; i < (int)s.size(); i++) {
  
        string ans = "";
        for (int j = i; j < (int)s.size(); j++) {
  
            ans += s[j];
  
            // if the size of the string
            // is equal to 1 then insert
            if (ans.size() == n) {
  
                // inserting unique
                // sub-string of length L
                st.insert(ans);
                break;
            }
        }
    }
    
}
    // Printing the set of strings
    /*
    for (auto it : st)
        cout << it << " "; */
        
        /*
    reverse(st.begin(), st.end());
    int decimal = 1;
    int total = 0;
    for (auto& it : st)
    {
        total += it*decimal;
        decimal *= 10;
    }
    */
    
    //convert vector to integer 
long long convert(vector<int> num) { 
    long long n = 0;
    int N = num.size();
    for (int i = 0; i < N; i++) {
        n += num[i]*pow(10, N-i-1);
    }
    return n;
}
  
// Driver Code
int main()
{	
	string s;
	cin >> s;
    int n = 3;
    cout <<  convert(result(s, n));
    return 0;
}