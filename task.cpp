#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
/*
void fun(int **a,int n){
    for(int i = 0; i <= n; i++){
        cout << a[i][10];
    }
}
int main(){
    fun((int**)c,3,3);
    return 0;
}*/
void fun(int (**a)[100],int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j];
        }
    }
}
int main(){
    int c[100][100] = {0};
    fun(c,10);
}