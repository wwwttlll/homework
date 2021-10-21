#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b > 0 ? gcd(b,a%b):a;
}
int main(){
    ios::sync_with_stdio(false);
    int x,y;
    while(cin >> x>> y){
        cout << gcd(x,y) << endl;
    }
    return 0;
}