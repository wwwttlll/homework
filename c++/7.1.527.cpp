#include<bits/stdc++.h>
using namespace std;
int m,n;
bool p[10011];
bool isprime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin >> n>>m;
    int cnt = 0;
    for(int i = n; i <= m ;i++){
        if(i == 1 || i <= 0)continue;
        if(isprime(i)){
            cnt++;
            cout << i << " ";
            if(cnt % 10 == 0){
                cout << endl;
            }
        }
    }
    return 0;
}