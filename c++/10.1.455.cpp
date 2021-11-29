#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a[100011];
int s[100011];
int f[100011];
int n,k;
signed main(){
    cin >> k >> n;
    for(int i = 1; i <= k ; i++){
        a[i] = read();
    }
    //sort(a + 1, a + 1 + k);
    f[0] = 1;
    for(int i = 1; i <= n; i++){
        int maxn = 1e10;
        for(int j = 1; j <= k; j++){
            while(a[j] * f[s[j]] <= f[i - 1]){
                s[j]++;
            }
            if(maxn > f[s[j]] * a[j]) maxn = f[s[j]] * a[j];
        }
        f[i] = maxn;
    }
    cout << f[n] << endl;
    return 0;
}