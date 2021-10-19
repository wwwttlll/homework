#include<bits/stdc++.h>
using namespace std;
int mon[15]={0,31,0,31,30,31,30,31,31,30,31,30,31};
int y,m,d;
int main(){
    ios::sync_with_stdio(false);
    cin >> y >> m >> d;
    bool isrun = 0;
    if(y % 400 ==0 || (y % 4==0&& y % 100 != 0)){
        isrun = 1;
    }
    int ans = 0;
    for(int i = 1; i < m; i++){
        ans += mon[i];
        if(i == 2){
            if(isrun){
                ans+=29;
            }else{
                ans += 28;
            }
        }
        
    }
    ans += d;
    cout << ans << endl;
    return 0;
}