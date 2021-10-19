#include<iostream>
using namespace std;
int t ;
int a[100];
int main(){
    cin >> t;
    while(t--){
        int sum = 0;
        for(int i = 1; i <= 5; i++){
            cin >> a[i];
            sum += a[i];
            //cout << x << " ";
        }
        a[6] = sum;
        for(int i = 1; i <= 6; i ++)
            cout << a[i] <<( (i == 6) ? "\n": " ") ;
        
    }
}