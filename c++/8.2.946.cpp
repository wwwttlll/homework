#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;
signed main(){
    ios::sync_with_stdio(false);
    int t;
    t = read();
    for(int i = 1; i <= t; i++){
        if(i != 1)cout << endl;
        set<pair<int,pair<int,int> > >s;
        s.clear();
        n = read();
        for(int i = 1; i <= n; i++){
            pair<int,pair<int,int>> a;
            a.first = read(); a.second.first = read(); a.second.second = read();
            if(a.second.first < a.second.second)swap(a.second.first,a.second.second);
            //cout << a.id<<" " << a.l<<" " << a.w <<endl;
            s.insert(a);
        }
        //cout  << s.size() << endl;
        set<pair<int,pair<int,int> > > :: iterator it = s.begin();
        for(it; it != s.end(); it++){
            pair<int,pair<int,int>> a= *it;
            cout << a.first <<" " << a.second.first<<" " << a.second.second << endl;
        }
    }
    return 0;
}