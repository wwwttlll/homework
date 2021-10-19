#include<bits/stdc++.h>
using namespace std;
char c;
//abcdefghijklmn
int main(){
    ios::sync_with_stdio(false);
    while(cin >> c){
        if(c <= 'm'){
            cout << char(c + 1)<<endl;
        }else{
            cout << char (c - 1) << endl;
        }
    }
    return 0;
}