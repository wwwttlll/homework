#include<iostream>
#include<cstdio>
using namespace std;
long long t;
long long s,m,h,d;
int main(){
    scanf("%d",&t);
    s = t %60;
    t /= 60;
    m = t % 60;
    t /= 60;
    h = t % 24;
    d = t/24;
    printf("%lld days %lld:%lld:%lld",d,h,m,s);
}