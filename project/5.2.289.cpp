#include<bits/stdc++.h>
using namespace std;

int cnt[200][3];
int num;
int v[20];
void dfs(int x,int id){
    if(id == 9){
        int c = x % 1000;
        int b = x / 1000 % 1000;
        int a = (x/1000000);
        
        if(c % a == 0 && b % a == 0){
            //cout << a << b << c << endl;
            cnt[++num][0] = a;
            cnt[num][1] = b;
            cnt[num][2] = c;
        }
        return ;
    }
    for(int i = 1; i <= 9; i++){
        if(v[i] == 0){
            v[i] = 1;
            dfs(x*10+i,id + 1);
            v[i] = 0;
        }
    }
}
int main(){
    //freopen("a.out","w",stdout);
    for(int i = 1; i <= 9; i++){
        v[i] = 1;
        dfs(i,1);
        v[i] = 0;
    }
    int a;
    while(cin >> a){
        for(int i = 0; i <=2; i++){
            cout << cnt[a][i];
            if(i == 2)cout << endl;
            else cout <<" ";
        }
    }
    return 0;
}