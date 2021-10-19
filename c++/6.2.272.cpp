#include<bits/stdc++.h>
using namespace std;
int a1[100];
int a2[100];
string s1,s2;
int main(){
    ios::sync_with_stdio(false);
    int f = 0;
    while(cin >> s1 >> s2){
        for(int i = 0; i < 26; i++){
            a1[i] = a2[i] = 0;
        }
        for(int i = 0; i < s1.size(); i++){
            a1[s1[i] - 'a'] = 1;
        }
        for(int i = 0; i < s2.size(); i++){
            a2[s2[i] - 'a'] = 1;
        }
        if(f == 1){
            cout << endl;
        }else{
            f=1;
        }
        cout << "in s1 or s2:";
        for(int i = 0; i < 26; i++){
            if(a1[i] || a2[i]){
                cout << char(i + 'a');
            }
        }
        cout << endl;
        cout << "in s1 and s2:";
        for(int i = 0; i < 26; i++){
            if(a1[i] && a2[i]){
                cout << char(i + 'a');
            }
        }
        cout << endl;

        cout << "in s1 but not in s2 ,or in s2 but not in s1:";
        for(int i = 0; i < 26; i++){
            if((a1[i] && !a2[i]) || (a2[i] && !a1[i])){
                cout << char(i + 'a');
            }
        }
        cout << endl;

        cout << "not in s1 and s2:";
        for(int i = 0; i < 26; i++){
            if(!a1[i] && !a2[i]){
                cout << char(i + 'a');
            }
        }
        cout << endl;
    }
    return 0;
}