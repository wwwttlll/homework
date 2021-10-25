#include<bits/stdc++.h>
using namespace std;
int t;
int a[1000011];
int prime[10000];
int cnt;
void isprime(){
    for(int i = 1; i <= 10000; i++){
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 0;
    for(int i = 2; i <= 10000; i++){
        if(a[i]){
            prime[++cnt] = i;
            for(int j = 2; j * i <= 10000; j++){
                a[i*j] = 0;
            }
        }
            
    }
}
int main(){
    ios::sync_with_stdio(false);
    isprime();
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= cnt; i++){
            //cout << prime[i] ;
            if(prime[i] > n)break;
            if(a[n - prime[i]] == 1) ans ++;
        }
        cout << ans / 2 << endl;
    }
    return 0;
}