#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> s){
        string ss = s;
        reverse(s.begin(),s.end());
        if(s == ss){
            puts("Yes");
        }
        else{
            puts("No");
        }
    }
    return 0;
}