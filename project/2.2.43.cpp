#include<bits/stdc++.h>
using namespace std;
int y,m,d;
int save;
bool isrun = 0;
int main(){
    ios::sync_with_stdio(false);
    cin >> y >> m >> d >> save;
    m += save ;
    y += (m/12);
    if(y % 400 == 0||(y%4 == 0&& y%100 !=0))isrun = 1;
    m %= 12;
    if( m == 0)m = 12;
    if(d == 31){
        if(m == 1||m == 3||m == 5||m == 7||m == 8||m == 10||m == 12){
            d = 31;
        }
        else if (m == 2){
            if(isrun == 1){
                d = 29;
            }else d = 28;
        }else{
            d = 30;
        }
    }
    if(d >= 29){
        if (m == 2){
            if(isrun == 1){
                d = 29;
            }else d = 28;
        }
    }
    cout << y <<" " << m << " " << d << endl;
    return 0;
}