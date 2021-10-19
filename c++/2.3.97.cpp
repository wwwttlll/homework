#include<bits/stdc++.h>
using namespace std;
double v,d,w;
int main(){
    ios::sync_with_stdio(false);
    while (cin >> v >> w >> d){
        double ans = v * w * d;
        if(d >= 250&& d < 500){
            ans *= 0.98;
        }else if (d >=500&& d < 1000){
            ans *= 0.92;
        }else if (d >= 1000 && d < 2000){
            ans *= 0.9;
        }else if(d>=2000){
            ans *= 0.85;
        }
        cout << fixed << setprecision(2) << ans << endl;
    }

    return 0;
}