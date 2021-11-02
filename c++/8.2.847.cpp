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
struct note{
    int a,b,c;
    string n;
}id[10001];
bool cmp1(note x,note y){
    return x.a > y.a;
}
bool cmp2(note x,note y){
    return x.b > y.b;
}
bool cmp3(note x,note y){
    return x.c > y.c;
}
signed main(){
    ios::sync_with_stdio(false);
    int cnt = 0;
    while(cin >> n >> m){
        if(cnt != 0)cout << endl;
        cnt++;
        for(int i = 1; i <= n; i++){
            cin >> id[i].n >> id[i].a >> id[i].b >> id[i].c;
        }
        set<string>s;
        s.clear();
        sort(id + 1, id + 1 + n, cmp1);
        for(int i = 1; i <= m; i++){
            s.insert(id[i].n);
        }
        sort(id + 1, id + 1 + n, cmp2);
        for(int i = 1; i <= m; i++){
            s.insert(id[i].n);
        }
        sort(id + 1, id + 1 + n, cmp3);
        for(int i = 1; i <= m; i++){
            s.insert(id[i].n);
        }
        set<string> :: iterator it = s.begin();
        for(it; it != s.end(); it++){
            cout << *it << endl;
        }
    }
    
    return 0;
}