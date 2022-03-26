#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n,k;
int main(){
    cin >> n >> k;
    stack<char>s;
    while(n){
        int x = n % k;
        n /= k;
        if(x >= 10){
            s.push('A' + x - 10); 
        }else{
            s.push('0' + x);
        }
    }
    while(s.size()){
        cout << s.top();
        s.pop();
    }
    return 0;
}