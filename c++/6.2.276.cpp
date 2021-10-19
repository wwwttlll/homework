#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    while(getline(cin,s)){
        string ss;
        int maxn = 0;
        string ans;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                ss+=s[i];
            }
            else{
                if(ss.size() > maxn){
                    maxn = ss.size();
                    ans = ss;
                }
                ss.clear();
            }
        }
        if(ss.size() > maxn){
            maxn = ss.size();
            ans = ss;
        }
        cout << maxn << " " << ans << endl;
    }
    return 0;
}