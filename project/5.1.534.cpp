#include<bits/stdc++.h>
using namespace std;
int i,a,b,c,d,e;
int maxn = 0;
int maxid,minid;
int minn = 1e9 + 11;
int main(){
    ios::sync_with_stdio(false);
    int cnt = 0;
    while((cin >> i >> a >> b >> c >> d >> e)){
        int sum = (a+b+c+d+e);
        if(maxn < sum){
            maxn = sum;
            maxid = i;
        }
        if(minn > sum){
            minn = sum;
            minid = i;
        }
    }
    cout << maxid << " " << maxn << endl;
    cout << minid << " " << minn << endl;
    return 0;
}