#include<bits/stdc++.h>
using namespace std;
int a[100];
void S(int a[]){
    sort(a + 1, a + 1 + 10);
    return;
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--){
        for(int i = 1; i <= 10; i++){
            cin >> a[i];
        }
        S(a);
        for(int i = 1; i <= 10; i++){
            cout << a[i] ;
            if(i == 10){
                cout << endl;
            }else{
                cout << " ";
            }
        }
    }
    
    return 0;
}