#include<bits/stdc++.h>
using namespace std;
int a[10000];
int n;
int r;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> r;
        if(n < 0){
            cout << "-";
            n = -n;
        }
        if(n == 0){
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        while(n){
            a[cnt] = (n%r);
            n /= r;
            cnt++;
        }
        for(int i = cnt - 1; i >= 0 ; i--){
            if(a[i] >= 10){
                cout<<char('A' + (a[i] - 10));
            }else{
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}