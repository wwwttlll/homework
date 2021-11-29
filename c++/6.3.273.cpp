#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a[100000];
set <int >s;
int maxn;
void isprime(){
    a[1] = 1;
    for(int i = 2; i <= 9999; i++){
        if(a[i] == 0){
            for(int j = 2; j*i <= 9999; j++){
                a[i*j] = 1;
            }
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    isprime();
    string ss = " ";
    while(cin >> ss){
        ss = " " + ss;
        maxn = 0;
        //cout << a[17] << endl;
        for(int i = 1; i < ss.size(); i++){
            string t = " ";
            for(int j = i ; j >= max(0,i - 4); j--){
                t = ss[j] + t;
                int n = 0;
                for(int k = 1; k < t.size(); k++){
                    if(t[k] <= '9' && t[k] >= '0')
                        n = n * 10 + (t[k] - '0');
                }
                if(a[n] == 0)maxn = max(maxn,n);
            }
            
        }
        cout << maxn << endl;
    }

    return 0;
}