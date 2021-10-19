#include<bits/stdc++.h>
using namespace std;
int a[11];
double sum;
int main(){
    ios::sync_with_stdio(false);
    for(int i = 1; i <= 10; i++){
        cin >> a[i];
        sum += a[i];
    }
    sum /= 10;
    cout << fixed << setprecision(1)<<sum <<endl;
    for(int i = 1; i <= 10; i++){
        if(a[i] > sum){
            cout << a[i] <<" ";
        }
    }
    return 0;
}