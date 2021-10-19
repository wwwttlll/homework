#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    string s;
    //Sun,Mon,Tue,Wed,Thu,Fri,Sat
    while(cin >> s){
        if(s == "Sun")cout << "Sunday"<<endl;
        if(s == "Mon")cout << "Monday"<<endl;
        if(s == "Tue")cout << "Tuesday"<<endl;
        if(s == "Wed")cout << "Wednesday"<<endl;
        if(s == "Thu")cout << "Thursday"<<endl;
        if(s == "Fri")cout << "Friday"<<endl;
        if(s == "Sat")cout << "Saturday"<<endl;
    }
    return 0;
}