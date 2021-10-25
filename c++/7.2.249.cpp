#include<bits/stdc++.h>
using namespace std;
int a[1000010];
void isprime(){
    for(int i = 1; i <= 1000000; i++){
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 0;
    for(int i = 2; i <= 1000000; i++){
        if(a[i])
            for(int j = 2; j * i <= 1000000; j++){
                a[i*j] = 0;
            }
    }
    for(int i = 1; i <= 1000000; i++){
        a[i] += a[i - 1];
    }
}
int main(){
    isprime();
    int n,m;
    while(cin >> n >> m){
        cout << a[m] - a[n - 1] << endl;
    }
    return 0;
}