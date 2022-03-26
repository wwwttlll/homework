#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int main(){
    stack<char> s;
    string ss;
    cin >> ss;
    int f = 0;
    for(int i = 0; i < ss.size(); i++){
        if(ss[i] == '('){
            s.push('(');
            continue;
        }
        if(ss[i] ==')'){
            if(s.size()){
                s.pop();
            }else f = 1;
        }
    }
    if(s.size() || f == 1){
        puts("Wrong");
    }
    else{
        puts("Correct");
    }
    return 0;
}
