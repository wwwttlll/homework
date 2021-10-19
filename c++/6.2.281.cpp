#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> s){
        int ans = 0;
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+'){
                ans+=sum;
                sum = 0;
            }
            else
                sum = sum * 10 + (s[i] - '0');
        }
        ans += sum;
        cout << ans << endl;
    }
    return 0;
}