#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
const int p = 396;
int t;
int a[10];
int main(){
    cin >> t;
    while(t--){
        for(int i = 1; i <= 9; i++){
            cin >> a[i];
            a[i + 9] = a[i]; 
        }
        int ans = 0;
        for(int i = 1; i <= 9; i++){
            int l1 = 0,l2 = 0;
            for(int t = 0; t < 9; t++){
                l1 = l1*10+a[i + t];
            }
            for(int t = 1; t <= 9; t++){
                int x = i - t;
                if(x < 1){
                    x += 9;
                }
                l2 = l2 * 10 + a[x];
            }
            if(abs(l1-l2) % p == 0)ans ++;
        }
        cout << ans << endl;
    }
    return 0;
}