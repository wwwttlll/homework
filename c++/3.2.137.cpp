#include<bits/stdc++.h>
using namespace std;
double l=200;
int va = 8,vb = 5;
int v = 45; 
int main(){
    ios::sync_with_stdio(false);
    double n;
    while(cin >> n){
        bool loc = 1;
        int cnt =0;
        l = 200;
        while(l >= n){
            if(loc == 1){
                double t =(l / (va + v));
                l -= (va + vb) *t;
                loc = 0; 
                cnt ++;
            }
            else if(loc == 0){
                double t =(l / (vb + v));
                l -= (va + vb) *t;
                loc = 1; 
                cnt ++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}