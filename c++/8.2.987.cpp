#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n,m;
map<string , char>mp;
signed main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s,ss;
        char f;
        cin >> s >> ss >> f;
        mp[s]=f;
        mp[ss] = f;
    }
    cin >> m;
    for(int i = 1; i <= m; i++){
        string s,ss;
        cin >> s >> ss;
        if(mp[s] == mp[ss]){
            puts("N");
        }else{
            puts("Y");
        }
    }
    return 0;

}