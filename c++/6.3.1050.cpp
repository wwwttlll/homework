#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
set<string >s;
signed main(){
    ios::sync_with_stdio(false);
    string ss;
    while(cin >> ss){
        s.insert(ss);
    }
    cout << s.size() ;
    return 0;
}