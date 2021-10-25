#include<bits/stdc++.h>
using namespace std;
long long a[10000];
int n,m;
int l,r;
void F(){
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i <= 50; i++){
        a[i] = a[i - 1] + a[i - 2] ;
        //cout << a[i] << endl;
    }
}
int main(){
    F();
    cin >> n >> m;
    for(int i = 1; i <= 50; i++){
        if(a[i] >= n){
            l = i;
            break;
        }
    }
    for(int i = 50; i >= 1; i--){
        if(a[i] <= m){
            r = i;
            break;
        }
    }
    //cout << l << " " << r << endl;
    long long sum = 0;
    for(int i = l; i <= r ; i++){
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}