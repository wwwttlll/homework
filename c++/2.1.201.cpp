#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
bool cmp(string a,string b){
    return a < b;
}
string s;
int main(){
    cin >> s;
    for(int i = 0 ; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(s[i] > s[j]){
                swap(s[i],s[j]);
            }
        }
    }
    cout << s <<endl;
    return 0;
}
