#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n == 1) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n){
        
        if(isprime(n)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}