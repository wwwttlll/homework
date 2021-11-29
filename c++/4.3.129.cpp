#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
long long a[300];
long long sum [300];
int n,k;
int main(){
    int ccc = 0;
    while(cin >> n >> k){
        if(ccc!=0)printf("\n");
        ccc++;
        for(int i = 1; i <= n; i++){
            a[i] = read();
            a[n + i] = a[i];
        }
        for(int i = 1; i <= 2*n; i++){
            sum[i] = sum[i - 1] + a[i];
        }
        long long minn = 0x3f3f3f3f;
        long long maxn = 0;
        for(int i = 4; i <= 2 * n; i++){
            maxn = max(maxn,sum[i] - sum[i - k]);
            minn = min(minn,sum[i] - sum[i - k]);
        }
        printf("Max=%d\n",maxn);
        printf("Min=%d\n",minn);
    }
    return 0;
}