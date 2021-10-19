#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> s){
        sort(s.begin(),s.end());
        cout << s << endl;
    }
    return 0;
}