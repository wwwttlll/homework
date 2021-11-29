#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n , r;
int a[5110];
int p[5110];
int main(){
    cin >> n >> r ;
    for(int i = 1; i <= n; i++){
        a[i] = read();
    }
    sort(a + 1, a + 1 + n);
    int sum = 0;
    int x = 1;
    for(int i = 1; i <= n; i++){
        p[x] += a[i];
        sum +=p[x];
        x++;
        if(x > r)x=1;
    }
    cout << sum << endl;
    return 0;
}