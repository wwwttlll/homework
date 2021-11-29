#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int t;
int main(){
    t = read();
    while(t--){
        int a, b;
        a = read();
        b = read();
        queue<int>q;
        for(int i = 1; i < 100; i++){
            int x = a * 100 + i;
            if(x % b == 0){
                q.push(i);
            }
        }
        while(q.size()){
            int x = q.front();
            //cout << x << endl;
            q.pop();
            if(x < 10) printf("0%d",x);
            else printf("%d",x);
            if(q.empty()){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }   
    return 0;
}