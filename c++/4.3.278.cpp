#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
long long a[10011];
int main(){
    for(int i = 1; i <= 200; i++){
        a[i] = a[i - 1] + i;
    }
    int n;
    while(cin >> n){
        int minn = 0;
        for(int i = 1; i <= 200; i++){
           if(a[i] <= n){
               minn = i;
           }
           else break;
        }
        //cout << minn << endl;
        int cha = n - a[minn];
        for(int i = 1; i <= minn; i++){
            if(i > minn - cha){
                cout << i + 1;
            }else cout << i;
            if(i != minn){
                cout << ',';
            }else cout << endl;
        }
    }
    return 0;
}