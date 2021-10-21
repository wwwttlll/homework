#include<bits/stdc++.h>
using namespace std;
double transform(int x){
    return 32+x*9/5.0;
}
int main(){
    ios::sync_with_stdio(false);
    int l,r;
    cin >> l >> r;
    for(int i = l ; i <= r; i+=10){
        cout<<i<<"C="<<transform(i)<<'F' << endl;
    }
    return 0;
}