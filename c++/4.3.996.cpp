#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a[20000];
int main(){
    for(int i = 1; i <= 10000; i++){
        int f = i;
        int x = i;
        while(x){
            f += x%10;
            x/=10;
        }
        a[f] = 1;
    }
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        if(a[i] == 0){
            cout << i <<endl;
        }
    }
    return 0;
}