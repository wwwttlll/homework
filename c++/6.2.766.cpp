#include<bits/stdc++.h>
using namespace std;
string s;

int main(){
    ios::sync_with_stdio(false);
    while(cin >> s){
        string sss[1111];
        string ss;
        for(int i = s.size() - 1; i >= 0 ; i--){
            ss = s[i] + ss;
            sss[i] = ss;
        }
        /*for(int i = 0; i < s.size() ; i++){
            cout <<sss[i]<<endl;
        }*/
        sort(sss,sss+s.size());
        
        for(int i = 0; i < s.size(); i++){
            cout << sss[i] << endl;
        }
    }
    return 0;
}