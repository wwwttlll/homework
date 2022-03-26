#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
queue<int>q;
int main(){
    q.push(1);
    int n;
    cin >> n;
    cout << 1 << endl;
    for(int i = 1; i < n; i++){
        int x = q.front();
        q.pop();
        q.push(x);
        cout << x << " ";
        for(int j = 2; j <= i; j++){
            int y = q.front();
            q.pop();
            cout << x + y << " ";
            q.push(x + y);
            x = y;
        }
        q.push(x);
        cout << 1 << endl;
    }
    return 0;
}