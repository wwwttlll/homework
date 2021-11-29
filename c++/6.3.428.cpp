#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int ans = 0;
string s;
signed main(){
    ios::sync_with_stdio(false);
    while(cin >> s){
        int f1 = 0; int f2 = 0; int f3 = 0;
        int a = 0,b = 0,c = 0;
        for(int i = 0; i < s.size(); i++){
            if(f1 == 0&& f2 == 0){
                if(s[i] <= '9' && s[i] >= '0'){
                    a = a*10 + (s[i] - '0');
                }else{
                    f1 = 1;
                    if(s[i] == '+')f3 = 1;//+
                    else f3 = 2;//-
                }
            }
            else if(f1 == 1 && f2 == 0){
                if(s[i] <= '9' && s[i] >= '0'){
                    b = b*10 + (s[i] - '0');
                }else{
                    f2 = 1;
                }
            }else{
                if(s[i] <= '9' && s[i] >= '0'){
                    c = c*10 + (s[i] - '0');
                }
            }
        }
        if(f3 == 1){
            if(a + b == c)ans++;
        }
        else{
            if(a - b == c)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}