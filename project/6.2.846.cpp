#include<bits/stdc++.h>
using namespace std;
int n,k;
void dfs(int x,int k){
    if(x){
        int t = x % k;
        dfs(x/k,k);
        if(t >= 10){
            cout << char(t - 10 + 'A');
        }else cout << t ;
    }
    return;
}
int main(){
    ios::sync_with_stdio(false);
    
    while(cin >> n >> k){
        dfs(n,k);
        cout << endl;
    }
    return 0;
}