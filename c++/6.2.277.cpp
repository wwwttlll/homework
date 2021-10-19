#include<bits/stdc++.h>
using namespace std;
string s;
string ans;
int maxn;
int sum;
int all;
int n;
int main(){
    ios::sync_with_stdio(false);
    int f = 0;
    while(cin >> n){
        maxn = 0;
        all = 0;
        for(int i = 1; i <= n ; i++){
            sum = 0;
            int s1,s2,p;
            char c1,c2;
            cin >> s >> s1 >> s2 >> c1 >> c2 >> p;
            if(s1 > 80 && p >= 1) sum += 8000;
            if(s1 > 85 && s2 >80) sum += 4000;
            if(s1 > 90) sum += 2000;
            if(s1 > 85 && c2 == 'Y')sum += 1000;
            if(s2 > 80 && c1 == 'Y')sum += 850;
            if(maxn < sum){
                ans = s;
                maxn = sum;
            }
            all += sum;
        }
        if(f == 1){
            cout << endl;
        }else{
            f=1;
        }
        cout << ans << endl;
        cout << maxn << endl;
        cout << all << endl;
    }
    return 0;
}