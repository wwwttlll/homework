#include<bits/stdc++.h>
using namespace std;
int mon[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int y,m,d,n;
bool isrun(int x){
    if(x % 400 == 0 || (!(x % 4)&& x%100)){
        return 1;
    }
    return 0;
}
int main(){
    cin >> y >> m >> d >> n;
    int re;
    if(m == 2 && isrun(y)){
        re = 29 - d;
    }else  re = mon[m] - d; //这个月剩下的天
    //int i = m;
    if(re <= 0){
        cout << y<<" " << m << " " << d <<endl;
        return 0;
    }
    d += n;
    /*d -= re;*/
    int i = m ;
    while(true){
        if(isrun(y) && i == 2){
            if(d > 29){
                d -= 29;
                i++;
            }else break;
        }
        else{
            if(d > mon[i]){
                d -= mon[i];
                i++;
            }
            else break;
        }
        if(i > 12){
            y++;
            i%=12;
        }
    }
    cout << y << " " << i << " " << d;
}