#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int t;
struct note{
    int own;
    int need;
    int cha;
};
bool cmp(note a,note b){
    return a.cha < b.cha;
}
int main(){
    t = read();
    while(t--){
        int n;
        n = read();
        note a[10000];
        for(int i = 1; i <= n; i++){
            a[i].own = read();
            a[i].need = read();
            a[i].cha = a[i].need - a[i].own;
        }
        sort(a + 1, a + 1 + n, cmp);
        int sum = 0;
        int f = 0;
        for(int i = 1; i <= n; i++){
            if(sum >= a[i].cha){
                sum+=a[i].own;
            }else{
                f = 1;
                break;
            }
        }
        if(f==1){
            puts("NO");
        }else{
            puts("YES");
        }
    }
    return 0;
}