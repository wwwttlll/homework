#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
int sum[100];
int main(){
    ios::sync_with_stdio(false);
    while(cin >> n){
        int ans = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum[i] = sum[i-1] + a[i];
        }
        for(int i = 0; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                if((sum[j]- sum[i])%11 == 0){
                    ans ++;
                }
            }
        }
        cout << ans <<endl;
    }
    return 0;
}