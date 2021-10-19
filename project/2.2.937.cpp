#include<bits/stdc++.h>
using namespace std;
int t;
int d,h,m,s;
int main(){
    //ios::sync_with_stdio(false);
    cin >> t;
    s = t % 60;
    t/=60;
    m = t%60;
    t/=60;
    h=t%24;
    t/=24;
    d = t;
    if(d >= 2){
        cout << d << " days ";
        cout<<setfill('0') << setw(2) << h<<":"<<setfill('0')<<setw(2) <<m<<":"<<setfill('0')<<setw(2) <<s<<endl;
    }else if(d == 1){
        cout << d << " day ";
        cout<<setfill('0') << setw(2) << h<<":"<<setfill('0')<<setw(2) <<m<<":"<<setfill('0')<<setw(2) <<s<<endl;
    }
    else if(!d && h){
        cout <<setfill('0')<< setw(2) << h<<":"<<setfill('0')<<setw(2) <<m<<":"<<setfill('0')<<setw(2) <<s<<endl;
    }
    else if(!d&&!h&&m){
        cout<<setfill('0')<<setw(2) <<m<<":"<<setfill('0')<<setw(2) <<s<<endl;
    }else if(!d&&!h&&!m){
        cout<<s<<endl;
    }
    return 0;
}