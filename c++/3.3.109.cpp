#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
double sum;
int main(){
    while(cin >> n){
        sum = 0;
        for(int i = 1; i <= n; i++){
            if(n%i==0){
                sum+=i;
            }
        }
        double ans = sum / n;
        printf("%.2f\n",ans);
    }
    return 0;
}