#include<iostream>
using namespace std;
int n;
int ans;
int main(){
    cin >> n;
    if(n < 160){
        ans = n * 10;
    }else{
        ans = 160 * 10 + (n - 160) * 30;
    }
    cout << ans <<endl;
    return 0;
}