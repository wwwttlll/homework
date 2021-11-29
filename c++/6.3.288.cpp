#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a[100] = {0,1013,1097,1103,1223,1283,1307,1367,1373,1523,1607,1613,1823,1907,1997,2003,2017,2053,2083,2113,2137,2347};
signed main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n){
        cout << a[n] << endl;
    }
    return 0;
}