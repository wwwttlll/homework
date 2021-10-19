#include<bits/stdc++.h>
using namespace std;
double m,r;
int y;

int main(){
    ios::sync_with_stdio(false);
    cin >> m >> y >> r;
    for(int i = 1; i <= y; i++){
        m = m * (1 + r);
    }
    cout << fixed << setprecision (1) << m << endl;
    return 0;
}