#include<bits/stdc++.h> 
using namespace std;
int n;
double l = 0.01;
int cnt = 0;
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    while(l <= n){
        cnt ++;
        l*=2;
    }
    cout << cnt << endl;
    return 0;
}