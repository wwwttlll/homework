#include<iostream>

using namespace std;
char s;
int main(){
    s = cin.get();

    if(s <='9' && s >= '0'){
        s = '0' + (9 - (s - '0'));
    }
    cout<<s;

    return 0;
}
