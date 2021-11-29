#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a[30];
int n,t;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> t;
    int ans = 0;
    for(int i = 1; i <= (pow(2,n) - 1); i++){
        int x = i;
        int sum = 0;
        int cnt = 0;
        while(x){
            cnt++;
            if(x & 1){
                sum += a[cnt];
            }
            x >>= 1;
        }
        if(sum == t){
            cnt = 0;
            ans++;
            int x = i;
            while(x){
                cnt++;
                if(x & 1){
                    cout << a[cnt] << " ";
                }
                x >>= 1;
            }
            cout << endl;
        } 
    }
    //cout << endl;
    cout << ans << endl;
    return 0;
}