#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
double x;
double esp = 1e-6;
double ans = 1;
long long a[500];
int main(){
    a[1] = 1;
    for(int i = 2; i <= 20; i++){
        a[i] = a[i - 1] * i;
    }
    cin >> x;
    for(int i = 1; i <= 1000; i++){
        double it = pow(x,i) / a[i];
        if(it < esp)break;
        if(!(i & 1)){
            it *= -1;
        }
        ans += it;
    }
    printf("%.6f\n",ans);
    return 0;
}