#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int main(){
    ios::sync_with_stdio(false);
    cin >> a >> b;
    if(a.size() != b.size()){
        cout << 1 << endl;
        return 0;
    }else{
        if(a == b){
            cout << 2 << endl;
            return 0;
        }
        else{
            for(int i = 0; i < a.size(); i++){
                if(a[i] >= 'A' && a[i] <= 'Z'){
                    a[i] = a[i] - 'A' + 'a';
                }
                if(b[i] >= 'A' && b[i] <= 'Z'){
                    b[i] = b[i] - 'A' + 'a';
                }
            }
            if(a == b){
                cout << 3 << endl;
            }else{
                cout << 4 << endl;
            }
        }
    }
    return 0;
}