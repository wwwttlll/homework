#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
map <pair <int ,int > ,int>m;
int main(){
    n = read();
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int x,y;
        cin >> x >> y;
        if(m[make_pair(x,y)]== 1){
            continue;
        }
        else{
            ans ++;
            m[make_pair(x,y)] = 1;
        }
        
    }
    cout << ans << endl;
    return 0;
}