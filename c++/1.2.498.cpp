#include<iostream>
#include<iomanip>
using namespace std;
double c;
int main(){
    cin >> c;
    double f = (9/5.0)*c+32;
    cout<< fixed<< setprecision(2) << f << "0000"<<endl;
}