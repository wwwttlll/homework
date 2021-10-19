#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    cin.get();
    while(t--){
        getline(cin,s);
        for(int i = s.size() - 1; i >= 0; i--){
            cout <<s[i];
        }
        cout << endl;
    }
    return 0;
}