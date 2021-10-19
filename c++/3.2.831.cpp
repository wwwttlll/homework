#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    int cnt = 0;
    while(n ){
        n/=2;
        cnt++;
    }
    cout << cnt << endl;
}