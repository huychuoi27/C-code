#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void output(int a[], int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}
void sort(int a[], int n){
    int i,j,t,min;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j] < a[min]) min = j;
        }
        t = a[i]; a[i] = a[min]; a[min] = t;
        cout << "Buoc " << (i+1) << ": ";
        output(a,n);
    }
}
main(){
    int a[100], n;
    cin >> n;
    input(a,n);
    sort(a,n);
}