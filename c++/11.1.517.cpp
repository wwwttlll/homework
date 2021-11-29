#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
/*打表666
int t;
int n;
int a[73939135];
int b[10];
void isprime(){
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i <= 73939135; i++){
        if(a[i] == 0){
            for(int j = 2; i * j <= 73939135; j++){
                a[i*j] = 1;
            }
        }
    }
}
void dfs(int x,int sum){
    if(x == n){
        cout << sum << ",";
        return;
    }
    for(int i = 0; i <= 9; i++){
        if(sum * 10 + i > 73939134)continue;
        if(a[sum * 10 + i] == 0){
            dfs(x + 1,sum * 10 + i);
        }
    }
}
int main(){
    isprime();
    for(int i = 1; i <= 8; i++){
        n = i;
        dfs(0,0);
    }
    
    return 0;
}*/
int a[5000] = {2,3,5,7,23,29,31,37,53,59,71,73,79,233,239,293,311,313,317,373,379,593,599,719,733,739,797,2333,2339,2393,2399,2939,3119,3137,3733,3739,3793,3797,5939,7193,7331,7333,7393,23333,23339,23399,23993,29399,31193,31379,37337,37339,37397,59393,59399,71933,73331,73939,233993,239933,293999,373379,373393,593933,593993,719333,739391,739393,739397,739399,2339933,2399333,2939999,3733799,5939333,7393913,7393931,7393933,23399339,29399999,37337999,59393339,73939133};
int t,n;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int minn = pow(10,n - 1);
        int maxn = pow(10,n);
        for(int i = 0; i <= 500; i++){
            if(a[i] <= maxn && a[i] >= minn)cout << a[i] << endl;
        }
    }
}