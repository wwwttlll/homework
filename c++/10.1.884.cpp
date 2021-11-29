#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n,m;
int mp[511][511];
int main(){
    n = read();m=read();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            mp[i][j] = read();
            mp[i][j] += mp[i-1][j];
        }
    }
    int ans = -0x3f3f3f3f;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            int t = 0;
            for(int k = 1; k <= m ; k++){
                t += mp[i][k] - mp[j-1][k];
                if(t > ans)ans = t;
                if(t < 0)t = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}