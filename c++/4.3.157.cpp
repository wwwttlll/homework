#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
int a[20];
int main(){
    while(cin >> n){
        int ans = 0;
        for(int i = 0; i < n ; i++){
            a[i] = read();
        }
        for(int i = 1; i < pow(2,n); i++){
            int sum = 0;
            for(int j = 0; j <= n; j++){
                if(i>>j & 1)sum+=a[j];
            }
            if(sum % 11 == 0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}