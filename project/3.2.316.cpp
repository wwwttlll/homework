#include<bits/stdc++.h>
using namespace std;
int h,l;
int fir=0;
int main(){
    ios::sync_with_stdio(false);
    freopen("oo.txt","w",stdout);
    while(cin >> h >> l){
        if(fir!=0)cout << endl;
        fir = 1;
        for(int i = 1; i <= l; i++){
            for(int j = 1; j <= i; j++){
                if(j==i)cout<<h;
                else cout<<h<<" ";
                h++;
                if(h == 10)h=1;

            }
            
            cout << endl;
        }
    }
    return 0;
}