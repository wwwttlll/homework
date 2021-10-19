#include<bits/stdc++.h>
using namespace std;
char c;
int main(){
    while(cin >> c){
        if(c >= 'a'&& c <= 'z'){
            c = (c-'a'+'A');
        }
        else c = (c-'A' + 'a');
        char s = c;
        cout << s << endl;
    }
    return 0;
}