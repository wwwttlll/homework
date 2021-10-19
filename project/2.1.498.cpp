#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double a,b,c;
int main(){
    cin >> a >> b >> c;
    double ans1 =  (-1 * sqrt(b*b - 4*a*c) - b)/(2*a);
    double ans2 =  (sqrt(b*b - 4*a*c) - b)/(2*a);
    cout << fixed << setprecision(2) << ans2 << " " << ans1 << endl;
}
