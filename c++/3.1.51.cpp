#include<bits/stdc++.h>
using namespace std;
int n;
int maxn,minn=1e9;
int ave;
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n ; i++){
        int x;
        cin >> x;
        ave +=x;
        maxn = max (maxn,x);
        minn = min(minn,x);
    }
    ave /= n;
    cout << maxn << " "<< minn <<" "<< ave << endl;
    return 0;
}