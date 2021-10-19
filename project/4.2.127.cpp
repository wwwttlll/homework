#include<bits/stdc++.h>
using namespace std;
int a[10000];
int n;
int maxn,id;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> n){
        maxn = 0;
        if(n == 0)break;
        for(int i = 1; i <= n;i++){
            cin >> a[i];
            if(a[i] >= maxn){
                maxn = a[i];
                id = i;
            }
        }
        swap(a[1],a[id]);
        for(int i = 1; i <= n; i++){
            cout<< a[i] << ((i==n) ? "\n":" ");
        }
    }
    
    return 0;
}