#include<bits/stdc++.h>
using namespace std;
int n;
int ans;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> n){
        ans = 0;
        for(int i = 15; i <= n; i++){
            int x = i;
            if(x % 3 == 0){
                while(x){
                    if(x%10 == 5){
                        ans ++;
                        break;
                    }
                    x/=10;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}