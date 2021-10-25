#include<bits/stdc++.h>
using namespace std;
struct note{
    string s;
    double num;
}a[10000];
int main(){
    double sum = 0;
    for(int i = 1; i <= 6; i++){
        cin >> a[i].s >> a[i].num;
        sum += a[i].num;
    }
    sum/=6;
    int cnt = 0;
    for(int i = 1; i <= 6; i++){
        if(a[i].num >= sum){
            cnt++;
        }
    }
    printf("%d %7.3f\n",cnt,sum);
    for(int i = 1; i <= 6; i++){
        if(a[i].num >= sum){
            cout << a[i].s;
            printf(" %4.1f\n",a[i].num);
        }
    }

}