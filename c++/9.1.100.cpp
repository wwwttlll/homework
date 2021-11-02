#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
void dfs(int n,char a,char b, char c){
    if(n == 1){
        printf("%c----%c\n",a,c);
        return;
    }
    dfs(n-1,a,c,b);
    printf("%c----%c\n",a,c);
    dfs(n-1,b,a,c);
}
signed main(){
    int cnt = 0;
    //ios::sync_with_stdio(false);
    while(cin >> n){
        if(cnt != 0)cout << endl;
        cnt++;
        dfs(n,'A','B','C');
    }
    return 0;
}