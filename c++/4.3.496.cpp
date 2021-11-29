#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int t,n;
int f[1111];
int a[1111];
int main(){
    t = read();
    while(t--){
        n = read();
        memset(f,0,sizeof f);
        for(int i = 1; i <= n; i++){
            a[i] = read();
        }
        int ans = 0;
        for(int i = 1; i <= n ; i++){
            f[i] = 1;
            for(int j = 1; j < i ; j++){
                if(a[i] >= a[j]){
                    f[i] = max(f[i],f[j] + 1);
                }
            }
            ans = max(ans,f[i]);
        }
        cout << ans << endl;
    }
    return 0;
}