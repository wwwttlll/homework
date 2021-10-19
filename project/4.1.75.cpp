#include<bits/stdc++.h>
using namespace std;
int a[1000];
int n;

int main(){
    ios::sync_with_stdio(false);
    while(cin >> n){
        for(int i = 1; i <= n; i ++){
            cin >> a[i];
        }
        sort(a + 1, a + 1 + n);
        reverse(a + 1, a + 1 + n);
        for(int i = 1; i <= n; i ++){
            cout << a[i] << " ";

        }cout << endl;
    }
    return 0;
}