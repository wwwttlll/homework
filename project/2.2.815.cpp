#include<bits/stdc++.h>
using namespace std;
double a,ans;
const int n = 100000;
int main(){
    ios::sync_with_stdio(false);
    cin >> a;
    if(a<=100000){
        ans = a * 0.1;
    }
    else if(a <= 200000){
        ans = 100000 * 0.1 + (a - 100000) * 0.075;
    }else if(a <= 400000) {
        ans = 100000 * 0.1 + 100000 * 0.075 + (a - 200000) * 0.05;
    }
    else if(a <= 600000) {
        ans = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (a - 400000) * 0.03;
    }
    else if(a <= 1000000) {
        ans = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (200000) * 0.03 + (a - 600000) * 0.015;
    }else{
        ans = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (200000) * 0.03 + 400000 * 0.015 + (a - 1e6) * 0.01;
    }
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}