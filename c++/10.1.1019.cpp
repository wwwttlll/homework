#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
string s;
int y[100];
int main(){
    int ans = 1;
    int cnt = 0;
    cin >> s;
    int len = s.size();
    for(int i = 1; i <= len; i++){
        if(len % i == 0){
            y[++cnt] = i;
            //cout << i << endl;
        }
    }
    for(int i = 1; i <= cnt; i++){
        int f = 0;
        for(int j = 0; j + y[i] < s.size(); j++){
            if(s[j] != s[j + y[i]]){
                f = 1;
                break;
            }
        }
        if(f == 0){
            ans = max(ans,len / y[i]);
        }
    }
    cout << ans << endl;
    return 0;
}