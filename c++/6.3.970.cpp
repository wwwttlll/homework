#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
//s.erase(std::find(s.begin(), s.end(), ' '));
int main(){
    string s;
    getline(cin,s);
    char a;
    cin >> a;
    if(a == 'D'){
        char c;
        cin >> c;
        if(s.find(c) != -1){
            s.erase(find(s.begin(), s.end(), c));
            cout << s << endl;
        }else
            cout << "指定字符不存在";
    }
    if(a == 'I'){
        char c1,c2;
        cin >> c1 >> c2;
        string ss = "";
        int f = 0;
        for(int i = s.size() - 1; i>= 0; i-- ){
            ss += s[i];
            if(s[i] == c1&&f == 0){
                ss+=c2;
                f = 1;
            }
        }
        if(f == 0)cout << "指定字符不存在";
        else {
            for(int i = ss.size() - 1; i>= 0; i-- ){
                cout << ss[i];
            } 
        }
    }
    if(a == 'R'){
        char c1,c2;
        cin >> c1 >> c2;
        int f = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c1){
                s[i] = c2;
                f = 1;
            }
        }
        if(f == 0)cout << "指定字符不存在";
        else cout << s << endl;
    }
    return 0;   
}