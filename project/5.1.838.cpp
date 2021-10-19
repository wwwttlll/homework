#include<bits/stdc++.h>
using namespace std;
string s[1011];
int main(){
    //freopen("in.txt","r",stdin);
    int cnt = 0;
    int maxn = 0;
    while(getline(cin,s[cnt])){
        maxn = max(maxn,(int)s[cnt].length());
        cnt ++ ;
    }
    //cout << cnt << endl;
    for(int i = 0; i < maxn; i++){
        for(int j = cnt - 1; j >= 0 ; j--){
            if(s[j].length() > i){
                cout << s[j][i];
            }else{
                cout << " ";
            }
        }cout << endl;
    }
    return 0;
}