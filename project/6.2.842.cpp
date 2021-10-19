#include<bits/stdc++.h>
using namespace std;
int k;
string s;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> k >> s){
        int ans = 0;
        int cnt = 1;
        for(int i = s.size() - 1; i >= 0; i--){
            int x;
            if(s[i] >= 'A'){
                x = s[i] - 'A' + 10;
            }else x = s[i] - '0';
            //cout << x << endl;
            ans += x * cnt;;
            cnt*=k;
        }
        cout << ans << endl;
    }
    return 0;
}