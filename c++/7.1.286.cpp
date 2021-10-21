#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    getline(cin,s);
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' ' &&s[i+1] == ' ' )ans++;

    }
    if(s[s.size() - 1] != ' ')ans++;
    cout << ans << endl;
    return 0;
}