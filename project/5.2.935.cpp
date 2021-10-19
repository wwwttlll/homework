#include<bits/stdc++.h>
using namespace std;
int n ,m;
int mp[100][100];
int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m ;j++){
            cin >> mp[i][j];   
        }
    }
    for(int i = 1; i <= (n + m) ; i++){
        for(int j = 1; j <= i ; j++){
            int x = i + 1;
            if(mp[j][x-j]){
                cout << mp[j][x-j] << " ";
            }
        }
    }
    return 0;
}