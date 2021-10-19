#include<bits/stdc++.h>
using namespace std;

double a,b;
char c;
int main(){
    cin >> a >> b;
    cin >> c;
    if(c == '+'){
        cout << fixed << setprecision(1) << a + b;
    }
    if(c == '-')
        cout << fixed << setprecision(1) << a - b;
    if(c == '*')
        cout << fixed << setprecision(1) << a * b;
    if(c == '/')
        if(b != 0){
            cout << fixed << setprecision(1) << a / b;
        }else{
            puts("Wrong!");
        }
}