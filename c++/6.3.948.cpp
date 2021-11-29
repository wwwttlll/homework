#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
string s = "0";
signed main(){
    ios::sync_with_stdio(false);
    int n;
    n = read();
    while(n--){
        string ss;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                ss = ss + '1';
            }
            if(s[i] == '1'){
                ss = ss + "01";
            }
        }
        s = ss;
    }
    cout << s << endl;
    return 0;
}