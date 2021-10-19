#include<bits/stdc++.h>
using namespace std;
double dis(int x1,int y1,int x2,int y2){
    return hypot(
        (x1 - x2),(y1 - y2)
    );
}
int main(){
    int a,aa,b,bb,c,cc;
    cin >> a >> aa >> b >> bb >> c >> cc;
    if(hypot(a-b,aa - bb) == hypot(a-c,aa - cc)){
        puts("1");
    }else if(hypot(b-a,bb - aa) == hypot(b-c,bb-cc)){
        puts("2");
    }else if(hypot(c-a,cc-aa) ==hypot(c-b,cc-bb)){
        puts("3");
    }else{
        puts("no center");
    }
    return 0;
}