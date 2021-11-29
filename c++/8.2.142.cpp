#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
string s[30];
struct note{
    string ss;
    string col;
    string mo;

}a[10000];
bool cmp(note a, note b){
    return a.ss < b.ss;
}
signed main(){
    ios::sync_with_stdio(false);
    int n,m;
    while(cin >> n >> m ){
        for(int i = 1; i <= n ; i++){
            cin >> s[i];
        }
        for(int i = 1; i <= m ; i++){
            cin >> a[i].ss >> a[i].col >> a[i].mo;
        }
        sort(a + 1, a + 1 + m, cmp);
        int flag = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m ; j++){
                if(a[j].ss == s[i]){
                    cout << a[j].ss <<" " << a[j].col <<" " << a[j].mo << endl;
                    flag = 1;
                }
            }
        }
        if(flag == 0)cout << "Not found!" << endl;
    }
    

    return 0;
}