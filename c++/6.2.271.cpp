#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> a >> b){
        int ff = 0;
        int l = b.length();
        for(int i = 0; i < a.size() ; i++){
            if(a[i] == b[0]){
                int f = 1;
                for(int j = 0; j < l; j++){
                    if(a[i+j] == b[j])continue;
                    else {
                        f = 0;
                        break;
                    }
                } 
                if(f == 1)  {
                    cout << i + 1 << endl;
                    ff = 1;
                    break;
                }
            }   
        }
        if(ff == 0){
            cout << 0 << endl;
        }
    }
    return 0;
}