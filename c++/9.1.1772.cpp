#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int cnt = 0;
long long dfs(int n){
    cnt ++;
    if(n <= 1)return n;
    else return dfs(n - 1) + dfs(n - 2);
}
int main(){
    int n;
    cin >> n ;
    long long ans = dfs(n);
    cout << ans <<" " << cnt;
    return 0;
}
