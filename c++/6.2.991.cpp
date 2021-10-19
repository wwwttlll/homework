#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string a;
    cin >> a;
    int f = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u'){
            cout << i + 1 << endl;
            f = 1;
            break;
        }
    }
    if(f == 0){
        cout << 0 << endl;
    }
    return 0;
}