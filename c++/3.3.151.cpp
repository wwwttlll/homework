#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
int main(){
    while(cin>>n){
        for(int i = 1; i <= n ;i++){
            if(i!=n)
                printf("%d+",i);
                else printf("%d",i);
        }
        for(int i = n-1; i >= 1; i--){
            printf("+%d",i);
        }
        printf("\n");
    }
    return 0;
}