#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> a >> b){
        int cnt = 0;
        cout << a<<"*"<<b<<"=";
        int ans=a*b;
        while(a){
            
            if(a&1){
                if(cnt==0){
                    cout<<b ;
                    cnt++;
                }else{
                    cout<<"+"<<b;
                }
            }
            a/=2;
            b*=2;
        }
        cout << "=" << ans <<endl;
    }
    return 0;
}