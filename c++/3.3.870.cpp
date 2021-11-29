//恶心
#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int mp[1001][1001];//中心500，500
int c = 500;
int main(){
    mp[500][500] = 1;
    mp[500][499] = 1;
    mp[499][500] = 1;
    int n;
    n = read();
    for(int i = 1; i <= 2*n + 1; i += 2){
        for(int j = 0; j <= i - 1; j ++){
            mp[c - 1 - i][c - j] = 1;
            mp[c - j][c - 1 - i] = 1;
        }
    }
    for(int i = 2; i <= 2*n ; i+=2){//对角线
        mp[c - i][c - i] = mp[c][c];
        mp[c - i - 1][c - i] = mp[c - 1][c];
        mp[c - i][c - i - 1] = mp[c][c - 1];
    } 
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            if(i > 500 && j <= 500){
                mp[i][j] = mp[1000 - i][j];
            }
            else if(i <= 500 && j > 500){
                mp[i][j] = mp[i][1000 - j];
            }
            else if(i > 500 && j > 500){
                mp[i][j] = mp[1000 - i][1000 - j];
            }
        }
    }
    for(int i = c - 2 * (n + 1) ; i <= c + 2 * (n + 1); i++){
        for(int j = c - 2 * (n + 1) ; j <= c + 2 * (n + 1); j++){
            if(mp[i][j] == 1)cout << '$';
            else cout << '.';
        }
        cout << endl;
    }
    return 0;
}