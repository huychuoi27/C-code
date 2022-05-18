#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,m,dem=0;
	cin>>n>>m;
	cin.ignore();
	string s,b;
	
	
	for (int i=0;i<n;i++){
	getline(cin,s);// cout<<" "<<i;
	//cout<<"adu : "<<s<<endl;
	for(int j=0;j<s.size();j++){
	if (s[j]=='#') dem++;
	 //  if (s[j]=='#') cout<<" +1 ";
	           
    }
    for(int j=0;j<s.size();j++){
     	if ((s[j]=='#')&&(s[j+1]=='#'))dem--;
     //	if ((s[j]=='#')&&(s[j+1]=='#'))cout<<"-1";
	 }
    for(int j=0;j<s.size();j++)
    if (s[j]=='#' && b[j]=='#')  {dem--;}// //
   // if (s[j]=='#' && b[j]=='#')  {cout<<"-1";}
    b=s;
	}
	cout<<dem<<endl;
}
/*
5 6
.#....
..#...
..#..#
...##.
.#....
*/