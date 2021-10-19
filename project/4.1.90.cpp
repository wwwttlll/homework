#include<bits/stdc++.h>
using namespace std;
long long a[20];
int main(){
    ios::sync_with_stdio(false);
    a[0] = 1;
    for(int i = 1; i <= 12 ; i ++){
        a[i] = a[i - 1] * i;
    }
    int n;
    while(cin >> n){
        cout << a[n] <<endl;
    }
    return 0;
}