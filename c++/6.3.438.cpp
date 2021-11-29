#include <iostream>
#include <set>
#include <cstring>
using namespace std;
int f[200005],m;
set<string> s[20];
string text = " ";
int main(){
	string ss;
    while(cin >> ss){
        if(ss == ".")break;
        s[ss.size()].insert(ss);
        m = max(m,(int)ss.size());
    }
    string t;
    while(cin >> t){
        text+=t;
    }
    f[0]=1;
    //cout << text << endl;
    int ans = 0;
    for(int i = 1; i < text.size(); i++){
        for(int j = min(i,m); j >= 1; j--){
            string tt = text.substr(i - j + 1, j);
            if(s[tt.size()].count(tt) == 1 && f[i - j] == 1){
                ans = i;
                f[i] = 1;
                break;
            }
        }
    }
    cout << ans << endl;
}