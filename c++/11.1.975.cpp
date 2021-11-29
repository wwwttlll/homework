#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n,m;
int f[30][30];
int main(){
    cin >> n>> m;
    for(int i = 1; i <= n; i++){
        f[i][0] = 1;
    }
    for(int j = 1; j <= m; j++){
        f[0][j] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == j){
                f[i][j] = f[i][j - 1];
            }
            if(i > j){
                f[i][j] = f[i-1][j] + f[i][j - 1];
            }
        }
    }
    cout << f[n][m] << endl;
    return 0;
}