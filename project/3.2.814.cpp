#include<bits/stdc++.h>
using namespace std;
double ans;
int n;
double up[1001],down[1001];
double cal[1001];
int main(){
    //ios::sync_with_stdio(false);
    up[1]=2,up[2] =3;
    down[1] = 1;down[2]=2;
    cal[1] = (double)up[1]/down[1];
    cal[2] = (double)up[2]/down[2];
    for(int i = 3; i <= 50;i++){
        up[i] = up[i-1] + up[i-2];
        down[i] = down[i-1] + down[i - 2];
        cal[i] = (double)up[i]/(double)down[i];
        //cout << fixed<<setprecision(6) <<cal[i]<< endl;
    }
    while(cin >> n){
        ans = 0;
        for(int i = 1; i <= n; i++){
            //cout << fixed<<setprecision(6) <<cal[i]<< endl;
            ans += cal[i];
        }
        cout << fixed<<setprecision(6) <<ans<< endl;
    }
    return 0;
}