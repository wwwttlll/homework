#include<bits/stdc++.h>
using namespace std;
int n;
double a[100];
double sum;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> n){
        sum = 0;
        for(int i = 1; i <= n;i ++){
            cin >>a[i];
            sum +=a[i];
        }
        sum /= n;
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] >= sum){
                cnt++;
            }
        }
        cout<< fixed << setprecision(6) <<  sum << " "<<cnt << endl;
    }
    
    return 0;
}