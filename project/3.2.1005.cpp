#include<bits/stdc++.h>
using namespace std;
int l,r;

int main(){
    ios::sync_with_stdio(false);
    cin >> l >> r;
    int ans = 0 ;
    for(int i = l;i<=r;i++){
        bitset<20>b(i);
        ans += b.count();
    }
    cout << ans << endl;
    return 0;
}