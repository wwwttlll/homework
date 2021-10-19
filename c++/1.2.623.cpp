#include<iostream>
#include<iomanip>
using namespace std;
double a,b,c;
double w;
int main(){
    cin >> a >> b >>c;
    cin >> w;
    double ave = (a + b + c) / 3.0;
    ave = (int)(ave * 10 + 0.5) / 10.0;
    ave *= w;
    cout<<fixed << setprecision(2) << ave <<endl;
}