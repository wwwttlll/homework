#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
const int p = 47;
string s1,s2;
int ans1 = 1,ans2 = 1;
signed main(){
    ios::sync_with_stdio(false);
    cin >> s1 >> s2;
    for(int i = 0 ; i < s1.size(); i++){
        ans1 *= s1[i] - 'A' + 1;
        ans1 %= p;
    }
    for(int i = 0; i < s2.size(); i++){
        ans2 *= s2[i] - 'A' + 1;
        ans2 %= p;
    }
    if(ans1 == ans2){
        cout << "GO" << endl;
    }else{
        cout << "STAY" << endl;
    }
    return 0;
}