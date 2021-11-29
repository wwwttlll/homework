#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
vector <int>a = {0,1,2,3,4,5,6,7,8,9};
int main(){
    cin >> n;
    for(int i = 1; i < n; i++){
        next_permutation(a.begin(),a.end());
    }
    for(int i = 0; i < 10; i++){
        cout << a[i];
    }
    return 0;
}