#include<bits/stdc++.h>
using namespace std;
int a,b,c,aa,bb,cc;
int main(){
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> aa >> bb >> cc;
    a += aa;
    b += bb;
    c += cc;
    b += c/60;
    c %= 60;
    a += b / 60;
    b %= 60;
    cout  << a << " "<<b <<" " << c ;
    return 0;
}