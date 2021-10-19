#include<bits/stdc++.h>
using namespace std;
double a[4];
int main(){
    //ios::sync_with_stdio(false);
    //cout << abs((a[3] * a[3])-(a[1] * a[1] + a[2] * a[2]))<<endl;
    while(cin >> a[1] >> a[2] >> a[3]){
        sort(a + 1, a + 1 + 3);
        if(abs(a[1] - a[2]) <= 0.001 && abs(a[1] - a[3])<= 0.001){
            puts("等边三角形");
        }
        else if(abs(a[1] - a[2] )<= 0.001  ){
            if(abs((a[3] * a[3])-(a[1] * a[1] + a[2] * a[2])) <= 0.001)
                puts("等腰直角三角形");
            else{
                puts("等腰三角形");
            }
        }
        else if (abs((a[3] * a[3])-(a[1] * a[1] + a[2] * a[2])) <= 0.001 && abs(a[1] - a[2] )> 0.001){
            puts("直角三角形");
        }
        else if(a[1] + a[2] <= a[3]){
            puts("不是三角形");
        }else{
            puts("一般三角形");
        }
    }
    return 0;
}