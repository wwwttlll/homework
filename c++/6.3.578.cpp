#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
string s;
int main(){
    while(cin >> s){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int cnt = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == s[i-1]){
                cnt++;
            }
            if(s[i+1] != s[i]){
                if(cnt > 1){
                    cout << cnt << s[i];
                }else cout << s[i];
                cnt = 1;
            }
        }
        cout << endl;
    }
    return 0;
}