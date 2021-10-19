#include<bits/stdc++.h>
using namespace std;
string s ;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        //cout << s << endl;
        string ss = "6";
        cout << ss ;
        for(int i = s.size() - 5; i < s.size();i++){
            cout << s[i];
        }
        cout << endl;
        
    }
    return 0;
}