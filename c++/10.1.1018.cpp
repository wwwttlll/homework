#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
vector<int> a[1011];
int ans = 0;
void dfs(int x,int step){
    ans = max(ans,step);
    for(int i = 0; i < a[x].size(); i++){
        dfs(a[x][i],step + 1);
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        a[x].push_back(i);
    }
    dfs(0,0);
    cout << ans << endl;
    return 0;
}