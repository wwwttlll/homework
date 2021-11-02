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
int cnt,f;
void dfs(int n,char a,char b, char c){
    
    if(n == 1){
        cnt ++;
        if(cnt == m){
            printf("%c--%c\n",a,c);
            f = 1;
        }
        return;
    }
    dfs(n-1,a,c,b);
    cnt ++;
    if(cnt == m){
        printf("%c--%c\n",a,c);
        f = 1;
        return;
    }
        
    dfs(n-1,b,a,c);
}
signed main(){
    ios::sync_with_stdio(false);
    while(cin >> n >> m){
        cnt = 0;f = 0;
        dfs(n,'A','B','C');
        if(f == 0){
            printf("none\n");
            continue;
        }
    }
    return 0;
}
/*
A----B
A----C
B----C
A----B
C----A
C----B
A----B
A----C
B----C
B----A
C----A
B----C
A----B
A----C
B----C
*/