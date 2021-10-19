#include<bits/stdc++.h>
using namespace std;
int n,m;

int main(){
    ios::sync_with_stdio(false);
    while(cin >> n >> m){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m ; j++){
                int x;
                cin >> x;
                if(x){
                    cout << i << " " << j << " "<< x << endl;
                }
            }
        }
        cout << endl;
    }
    return 0;
}