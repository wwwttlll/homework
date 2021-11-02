#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int f(int x){
    if(x <= 2)return x;
    return f(x - 2) + f(x - 1);
}
signed main(){
    ios::sync_with_stdio(false);
    int n;
    n = read();
    int ans = f(n);
    cout << ans;
    return 0;
}