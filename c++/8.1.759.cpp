#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int a[1000];
int main(){
    ios::sync_with_stdio(false);
    int cnt = 0;
    
    for(int i = 1; i <= 10; i++){
        string s;
        cin >> s;
        if(s == "wang")a[1]++;
        else if(s == "li")a[2]++;
        else if(s == "zhang")a[3] ++;
        else{
            a[4]++;
        }
    }
    cout << "li:"<<a[2]<<endl;
    cout << "zhang:" << a[3] << endl;
    cout << "wang:" << a[1] <<endl;
    cout << "Wrong election:" << a[4] <<endl;
    return 0;
}