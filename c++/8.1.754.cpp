#include<bits/stdc++.h>
using namespace std;
struct note{
    int n;
    char c;
}a[200];
bool cmp(note a, note b){
    if(a.n!=b.n)
    return a.n > b.n;
    else return a.c < b.c;
}
string s;
int main(){
    ios::sync_with_stdio(false);
    int cnt = 1;
    
    while(getline(cin,s)){
        if(cnt != 1)cout << endl;
        cnt++;
        for(int i = 0; i < 26; i++){
            a[i].n = 0;
            a[i].c = char(i + 'A');
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] <= 'z' && s[i] >= 'a'){
                //cout << "AAA";
                //cout << s[i] << endl;
                //cout << s[i] - 'a' << endl;
                //cout << a[s[i] - 'a'].c << endl;
                a[s[i] - 'a'].n ++;
            }
            if(s[i] <= 'Z' && s[i] >= 'A'){
                //cout << "BBB";
                //cout << s[i] << endl;
                //cout << a[s[i] - 'A'].c << endl;
                a[s[i] - 'A'].n ++;
            }
        }
        /*for(int i = 0; i < 26; i++){
            cout << a[i].c <<  " " << a[i].n << endl;
        }*/
        sort(a,a+26,cmp);
        for(int i = 0; i < 26; i++){
            if(a[i].n == 0)break;
            cout << a[i].c <<  " " << a[i].n << endl;
        }
    }
    return 0;
}