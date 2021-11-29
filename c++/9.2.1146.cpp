#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
string s[4];
int main(){
    int a = 0,b = 0;
    for(int i = 0; i < 3; i++){
        getline(cin,s[i]);
        for(int j = 0; j < 3; j++){
            if(s[i][j] == 'O')a++;
            if(s[i][j] == 'X')b++;
        }
    }
    if(b - a > 1 || a > b){
        puts("false");
        return 0;
    }
    int cntx = 0,cnty = 0;
    for(int i = 0; i < 3; i++){
        if(s[i][0] == s[i][1] && s[i][1] == s[i][2]){
            if(s[i][0] == 'X')
                cntx++;
            else if(s[0][0] == 'O') cnty++;
        }
        if(s[0][i] == s[1][i] && s[1][i] == s[2][i]){
            if(s[i][0] == 'X')
                cntx++;
            else if(s[0][0] == 'O') cnty++;
        }
    }
    if(s[0][0] == s[1][1] && s[1][1] == s[2][2]){
        if(s[0][0] == 'X')
                cntx++;
        else if(s[0][0] == 'O') cnty++;
    }
    if(s[0][2] == s[1][1] && s[1][1] == s[2][0]){
        if(s[2][0] == 'X')
                cntx++;
        else if(s[0][0] == 'O') cnty++;
    }
    if(cntx + cnty > 1 && cntx != 2){
        puts("false");
        return 0;
    }
    if(cntx == 2 && s[1][1] == 'X') {
        puts("true");
        return 0;
    }
    if(cntx == 1 && a == b){
        puts("false");
        return 0;
    }
    puts("true");
    return 0;
}