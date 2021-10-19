#include<bits/stdc++.h>
using namespace std;
int a[1000];
int cnt = 0;
int b[10];
int main(){
    ios::sync_with_stdio(false);
    for(int i = 1000; i <= 9999; i++){
        int x = i;
        for(int j = 1; j <= 4; j++){
            b[j] = x%10;
            x /= 10;
        }
        int t = sqrt(i);
        if((b[4] + b[2] )== (b[1] * b[3])&& t*t == i){
            a[++cnt] = i;
        }
    }
    int n;
    while(cin >> n){
        cout << a[n] << endl;
    }
    return 0;
}