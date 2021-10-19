#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> s){
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] <= '9' && s[i] >= '0'){
                int x = s[i] - '0' + 1;
                i++;
                while(x--){
                    cnt++;
                    cout << s[i];
                    if(cnt%3 == 0 && (x!=0 || i != s.size() - 1)){
                        cout << " ";
                    }
                }
            }
            else{
                cnt++;
                cout << s[i];
                if(cnt%3 == 0 && i != s.size() - 1){
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}