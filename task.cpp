#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
char a[10011];
char b[10011];
int aid[10011];
int f[10001][10001] = {0};
int ans = 0;
int ansall = 0;
string anss;
string sss;
signed main(){
    ios::sync_with_stdio(false);
    while(getline(cin,sss)){
        if(sss[0] == '@')break;
        s += sss + '\n';
    }
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A') ){
            a[++cnt] = s[i];
            aid[cnt] = i;
        }
    }
    for(int i = 1; i <= cnt ; i++){
        b[cnt - i + 1] = a[i];
    }/*
        for(int i = 1; i <= cnt ; i++){
            cout << a[i] ;
        }
        cout << endl;
        for(int i = 1; i <= cnt ; i++){
            cout << b[i] ;
        }
        cout << endl;*/
    int ans = 0;
    int last = 0;
    for(int i = 1; i <= cnt; i++)
        for(int j = 1; j <= cnt; j++){
            if(a[i] == b[j] || (a[i] - 'A' + 'a' == b[j]) || (a[i] - 'a' + 'A' == b[j])){
                f[i][j] =  f[i-1][j-1] + 1;
            if(f[i][j] > ans){
                ans = f[i][j];
                //cout << a[i] << " " << b[j] << endl;
                last = i;
            }
        }
    }
    //cout << ans << endl;
    if(ansall < ans){
        ansall = ans;
        anss.clear();
        for(int i = aid[last]; i >= 0; i--){
            anss = s[i] + anss ;
            if(isalpha(s[i]))ans--;
            if(ans == 0)break;
        }
    }
    cout << ansall << endl;
    cout << anss << endl;
    return 0;
}
