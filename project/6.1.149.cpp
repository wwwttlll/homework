#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    int t,m;
    cin >> t;
    cin.get();
    while(t--){
        getline(cin,s);
        cin >> m;
        cin.get();
        for(int i = 0; i < s.size(); i++){
            if(s[i]==' '){
                cout << 0 ;
                if(i == (s.size() - 1)){
                    cout << endl;
                }else{
                    cout << " ";
                }
                continue;
            }else{
                if(s[i] <= 'z'&&s[i] >= 'a'){
                   s[i] = s[i] - 'a' + 'A';
                }
                if(s[i] <= 'Z'&& s[i] >= 'A'){
                    cout << (s[i] - 'A' + 1 + m) ;
                }else{
                    cout << (int)s[i] + 100;
                }
                if(i == (s.size() - 1)){
                    cout << endl;
                }else{
                    cout << " ";
                }
            }
        }
    }
    return 0;
}