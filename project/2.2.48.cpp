#include<bits/stdc++.h>
using namespace std;
int n;

int main(){
    cin >> n;
    switch (n)
    {
    case 0:
        puts("Sunday");
        break;
    case 1:
        puts("Monday");
        break;
    case 2:
        puts("Tuesday");
        break;
    case 3:
        puts("Wednesday");
        break;
    case 4:
        puts("Thursday");
        break;
    case 5:
        puts("Friday");
        break;
    default:
        puts("Saturday");
        break;
    }
}