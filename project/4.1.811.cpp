#include<bits/stdc++.h>
using namespace std;
int a[200];
int n;
int main(){
    while(cin >> n){
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int era;
        cin >> era;
        int cnt = 0;
        queue<int>q;
        for(int i = 1; i <= n; i++){
            if(a[i] == era){
                cnt++;
            }
        }
        if(cnt >= n){
            puts("Empty array!");
            continue;
        }
        for(int i = 1; i <= n; i++){
            if(a[i] != era){
                cout << a[i] ;
                if(cnt)cout << " ";
                else cout << endl;
            }else cnt--;
        }
    }
}