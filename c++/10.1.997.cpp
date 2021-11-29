#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a[1000];
int b[1000];
int cnt;
int n;
string s;
int l;
bool judge(int l){
    for(int i = 0; i <= l/2; i++){
        if(a[i]!=a[l-i-1])return false;
    }
    return true;
}
int main(){

    n = read();
    cin >> s;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] <= '9'&&s[i] >= '0'){
            a[i] = s[i] - '0';
        }else{
            a[i] = s[i] - 'A' + 10;
        }
    }
    l = s.size();
    memcpy(b,a,sizeof a);
    reverse (b,b+l);
    int cnt = 0;
    //15 15
    //1  7  6
    while(!judge(l)){
        /*for(int i = 0; i < l ; i++)cout << a[i] << " ";
        cout << endl;
        for(int i = 0; i < l ; i++)cout << b[i] << " ";
        cout << endl;*/
        cnt++;
        if(cnt > 30)break;
        
        for(int i = 0; i < l; i++){
            a[i]+=b[i];
            
        }
        for(int i = 0; i < l; i++){
            while(a[i] >= n){
                a[i] -= n;
                a[i+1] ++;
            }
        }
        if(a[l])l++;
        memcpy(b,a,sizeof a);
        reverse (b,b+l);
    }
    if(cnt > 30){
        puts("Impossible!");
    }else {
        printf("STEP=%d\n",cnt);
    }
    return 0;
}