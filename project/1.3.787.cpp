#include<bits/stdc++.h>
using namespace std;
char a,b,c;
int main(){
    while((a = cin.get()) != EOF){
        b=cin.get();
        c=cin.get();
        //puts("N");
        //cout << a << b << c <<endl;
        int aa = a - '0';
        int bb = b - '0';
        int cc = c - '0'; 
        int ans = 100*(int)cc+10*(int)bb+(int)aa;
        cout << setw(3) << ans <<endl;
        cin.get();
    }
}