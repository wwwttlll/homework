#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int fac(int x){
    if(x == 0)return 1;
    else{
        return x * fac(x - 1);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n){
        long long ans = fac(n);
        cout << ans << endl;
    }
    return 0;
}