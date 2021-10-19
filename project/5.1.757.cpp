#include<bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios::sync_with_stdio(false);
    while(cin >> n){
        int mp[100][100];
        memset(mp,0,sizeof mp);
        int m = (2 * n + 1);
        //cout << n << endl;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= m; j++){
                if(i == j || (i == (m - j + 1))){
                    //cout << i << " " << j << endl;
                    mp[i][j] = 1;
                }
                if(j < i && j > (m - i + 1)){
                    mp[i][j] = 3;
                }
                if(j > i && j < (m - i + 1)){
                    mp[i][j] = 2;
                }
                if(j < i && j < (m - i + 1)){
                    mp[i][j] = 4;
                }
                if(j > i && j > (m - i + 1)){
                    mp[i][j] = 5;
                }
            }
        }
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= m; j++){
                cout << mp[i][j] ;
                if(j == m){
                    cout << endl;
                }else{
                    cout <<" ";
                }
            }
        }
    }
    return 0;
}