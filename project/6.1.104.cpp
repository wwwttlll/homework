#include<bits/stdc++.h>
using namespace std;
string s;
int a[30];
int main(){
    //ios::sync_with_stdio(false);
    while(cin >> s){
        memset(a,0,sizeof a);
        for(int i = 0; i < s.size(); i++){
            if(s[i] <= 'z'&&s[i] >= 'a'){
                a[s[i] - 'a'] ++;
            }
            if(s[i] <= 'Z' && s[i] >= 'A'){
                a[s[i] - 'A'] ++;
            }
        }
        
        for(int i = 0; i <= 25; i ++){
            if(a[i]){
                cout<< char('A' + i)<<":"<<a[i]<<endl;
            }
        }
    }
    return 0;
}