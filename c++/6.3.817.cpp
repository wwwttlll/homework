#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int t;
int a[7];
signed main(){
    t = read();
    while(t--){
        string s;
        cin >> s;
        memset(a,0,sizeof a);
        for(int i = 0 ; i < s.size(); i ++){
            a[i%6] += (int)s[i];
        }
        for(int i = 0; i < 6; i++){
            while(a[i] >= 10){
                int n = a[i];
                int sum = 0;
                while(n){
                    sum+=n%10;
                    n/=10;
                }
                a[i] = sum;
            }
        }
        for(int i = 0; i < 6; i++){
            cout << a[i];
        }cout << endl;
    }
    return 0;
}