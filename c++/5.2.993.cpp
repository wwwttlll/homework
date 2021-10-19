#include<bits/stdc++.h>
using namespace std;
int n,m;
int mp[220][220];
int sum1[220][220];
int sum2[220][220];
int ans = 0;
int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m ;j++){
            cin >> mp[i][j];
            sum1[i][j] = sum1[i-1][j] + sum1[i][j-1] - sum1[i-1][j-1] + mp[i][j];
            sum2[i][j] = sum2[i-1][j] + sum2[i][j-1] - sum2[i-1][j-1] + 1 - mp[i][j];
        }
    }
    /*for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m ;j++){
            cout << sum1[i][j] ;
        }
        cout << endl;
    }
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m ;j++){
            cout << sum2[i][j] ;
        }
        cout << endl;
    }*/
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            for(int k = ans + 1; (i + k - 1) <= n&&(j + k - 1) <= m; k++){
                if(sum1[i + k - 1][j + k - 1] + sum1[i-1][j-1] - sum1[i+k-1][j-1] - sum1[i-1][j+k-1] == (k*k)){
                    ans = max(ans,k);
                }
                else if(sum2[i + k - 1][j + k - 1] + sum2[i-1][j-1] - sum2[i+k-1][j-1] - sum2[i-1][j+k-1] == (k*k)){
                    ans = max(ans,k);
                }else{
                    break;
                }
            }
        }
    }
    cout << ans*ans << endl;
    return 0;
}