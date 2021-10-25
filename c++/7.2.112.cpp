#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> n){
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                for(int k = j + 1; k <= n; k++){
                    if((i + j) > k && (i + j + k) == n) ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}