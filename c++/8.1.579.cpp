#include<bits/stdc++.h>
using namespace std;
struct note{
    string s;
    int m,p,ave;
}a[6];
int n;
int main(){
    ios::sync_with_stdio(false);
    int maxn = 0 ,id;
    for(int i = 1; i <= 5; i++){
        cin >> a[i].s >> a[i].m >> a[i].p;
        if(maxn < a[i].m){
            maxn = a[i].m;
            id = i;
        }
        a[i].ave = (a[i].m + a[i].p)/2;
    }
    for(int i = 1; i <= 5; i++){
        cout << a[i].s << " " << a[i].ave<< endl;
    }
    cout << a[id].s <<" " << a[id].m << " " << a[id].p << endl;
    return 0;
}