#include<bits/stdc++.h>
using namespace std;
int t;
double n;
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        cout <<fixed << setprecision(2) << abs(n)<<endl;
    }
    return 0;
}