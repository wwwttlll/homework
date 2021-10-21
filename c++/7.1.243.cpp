#include<bits/stdc++.h>
using namespace std;
int n,a[1000];
void read(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}
int maxn,minn=1e9;
int id1,id2;
int main(){
    ios::sync_with_stdio(false);
    read();
    for(int i = 1; i <= n; i++){
        if(a[i] > maxn){
            maxn=a[i];
            id1=i;
        }
        if(a[i] < minn){
            minn = a[i];
            id2 = i;
        }
    }
    int x = a[id1];
    a[id1] = a[id2];
    a[id2] = x;
    for(int i = 1; i <= n ;i++){
        cout << a[i];
        if(i == n)cout << endl;
        else cout << " ";
    }
    return 0;
}