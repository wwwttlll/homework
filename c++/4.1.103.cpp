#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    ios::sync_with_stdio(false);
    a[7] = 2;
    for(int i = 7; i >= 1; i--){
        a[i - 1] = (a[i] + 1) * 2;
    }
    int n;
    while(cin >> n){
        cout << a[n-1] - a[n] << " "<< a[n] << endl;
    }
    return 0;
}