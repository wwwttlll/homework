#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    //ios::sync_with_stdio(false);
    while(cin >> n ){
        if(n >6 || n < 2){
            puts("No.");
        }else{
            if(n==2 || n == 3){
                puts("One.");
            }
            else if(n == 4){
                puts("Two.");
            }else if (n == 5||n==6){
                puts("Three.");
            }
        }
    }
    return 0;
}