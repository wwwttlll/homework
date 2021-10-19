#include<bits/stdc++.h>
using namespace std;
double num = 100;
double c;
int cnt = 0;
int main(){
    ios::sync_with_stdio(false);
    cin >> c;
    while(num < 200.0){
        num *=(1 + c * 0.01);
        cnt ++ ;
    
    }cout << cnt << endl;
    return 0;
}