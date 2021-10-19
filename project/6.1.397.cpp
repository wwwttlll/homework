#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    while(n--){
        cin >> s;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] <= 'z' && s[i] >= 'a'){
                ans ++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}