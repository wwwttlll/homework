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
    while(cin >> n){
        int  f = 0;
        for(int i = 1; i <= 1000000; i++){
            int x = i;
            if(x % 10 == 7){
                int cnt=0;
                while(x){
                    x/=10;
                    cnt++;
                }
                int x = i / 10 + pow(10,cnt - 1) * 7;
                if(x == i * n){
                    cout << i << endl;
                    f = 1;
                    break;
                }
            }
            

        }
        if(f == 0){
            cout << "No" << endl;
        }
    }
    return 0;
}