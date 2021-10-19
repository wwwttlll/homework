#include<bits/stdc++.h>
using namespace std;
string s[5];

int main(){
    ios::sync_with_stdio(false);
    int n;
    s[1] = "c 0 c 4 c 8 c 12 d 3 d 7 d 11 h 2 h 6 h 10 s 1 s 5 s 9";
    s[2] = "c 1 c 5 c 9 d 0 d 4 d 8 d 12 h 3 h 7 h 11 s 2 s 6 s 10";
    s[3] = "c 2 c 6 c 10 d 1 d 5 d 9 h 0 h 4 h 8 h 12 s 3 s 7 s 11";
    s[4] = "c 3 c 7 c 11 d 2 d 6 d 10 h 1 h 5 h 9 s 0 s 4 s 8 s 12";
    while(cin >> n){
        cout << s[n] << endl;
    }
    return 0;
}