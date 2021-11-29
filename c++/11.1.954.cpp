#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
long long a[1111];
void dfs(int x){
    int t = 0;
    for(int i = 32; i >= 0; i--){
        if(x >= a[i]){
            x-=a[i];
            if(t != 0)printf("+");
            if(i == 1){
                printf("2");
            }
            else if(i == 0){
                printf("2(0)");
            }
            else{
                printf("2(");
                dfs(i);
                printf(")");
            }
            t++;
        }
    }
}
//2(2 (2(1))+22)+2(22)
//2(2(2(0))+2)+2(2)
//2(2 (2) +2 +2(0))+ 2  (2+2(0))+2(0)
//2（2（2）+2+2（0））+2（2+2（0））+2（0）
int main(){
    a[0] = 1;
    for(int i = 1; i <= 62; i++){
        a[i] = 2 * a[i - 1];
        //cout << a[i] << endl;
    }
    scanf("%d",&n);
    dfs(n);
    return 0;
}