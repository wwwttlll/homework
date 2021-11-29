#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int xx[10000];
int rex[10000];
void mul1(){//re = re * x ;
    int x[10000]={0};
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            x[i + j - 1] += rex[i] * xx[j];
        }
    }
    for(int i = 1; i <= 1000; i++){
        while(x[i ] >= 10){
            x[i] -= 10;
            x[i+1]++;
        }
    }
    memcpy(rex,x,sizeof x);
}
void mul2(){//x = x * x ;
    int x[10000]={0};
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            x[i + j - 1] += xx[i] * xx[j];
        }
    }
    for(int i = 1; i <= 1000; i++){
        while(x[i ] >= 10){
            x[i] -= 10;
            x[i+1]++;
        }
    }
    memcpy(xx,x,sizeof x);
}
void pw(int x,int y){
    xx[1] = x;
    rex[1] = 1;
    for(;y;y>>=1){
        if(y&1)mul1();
        mul2();
    }
}
int main(){
    int p;
    cin >> p;
    int ans = p*log10(2)+1;
    cout << ans << endl;
    pw(2,p);
    rex[1] --;
    for(int i = 500; i >= 1; i-=50){
        for(int j = i; j > i - 50; j--){
            cout << rex[j];
        }
        cout << endl;
    }
    return 0;
}