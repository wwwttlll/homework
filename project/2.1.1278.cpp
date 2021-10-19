#include<iostream>
#
using namespace std;
char s;
int main(){
    cin >> s;

    if(s <='9' && s >= '0')
        s = '0' + (9 - (s - '0'));
    cout<<s<<endl;

    return 0;
}
