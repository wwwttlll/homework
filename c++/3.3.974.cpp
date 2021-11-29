#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a,b,c,d;
int m[10];
int main(){
    cin >>a >> b >> c >>d;
    while(a>= 2 && b >= 1 && d >= 2){
        m[0] ++;
        a-=2; b --; d-=2;
    }
    while(a&&b&&c&&d){
        a--;b--;c--;d--;
        m[1]++;
    }
    while(c >= 2 && d){
        c-=2;d--;
        m[2]++;
    }
    while(b>=3){
        b-=3;m[3]++;
    }
    while(a&&d){
        a--;d--;m[4]++;
    }
    for(int i = 0; i <= 4; i++){
        cout << m[i] << endl;
    }
    return 0;
}