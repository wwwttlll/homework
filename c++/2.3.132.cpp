#include<bits/stdc++.h>
using namespace std;
int d;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> d&& d != -1){
        if(d >= 90&& d <= 100){
            cout << "A" << endl;
        }else if (d >=80&& d < 90){
            cout << "B" << endl;
        }else if (d >= 60 && d < 80){
            cout << "C" << endl;
        }else {
            cout << "D" << endl;
        }
    }
    return 0;
}