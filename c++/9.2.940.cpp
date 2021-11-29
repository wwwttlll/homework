#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int mp[10][10];
int n;
int cnt = 0,res = 0;
bool judge(int x,int y){
    for(int i = x; i >= 0 && mp[i][y] != 0; i--){
        if(mp[i][y] == 2)return false;
    }
    for(int i = y; i >= 0 && mp[x][i] != 0; i--){
        if(mp[x][i] == 2)return false;
    }
    return true;
}
void dfs(int x,int y,int c){
    if(c == cnt){
        res ++;
        return;
    }
    if(y == n){
        y = 0;
        x++;
    }
    if(x == n)return;
    dfs(x,y+1,c);
    if(judge(x,y)&& mp[x][y]!=0){
        mp[x][y] = 2;
        dfs(x, y + 1, c + 1);
        mp[x][y] = 1;
    }
}
int main(){
    n = read();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ;j++){
            mp[i][j] = read();
        }
    }
    while(++cnt){
        res = 0;
        dfs(0,0,0);
        if(res == 0)break;
        cout << res << endl;
    }
    return 0;
}