#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}int n;
string s;
map<string,int>v;
map<string,int>fir;
int maxn;
string maxs;
int f;
int main(){
    n = read();
    cin >> s;
    //cout << s << endl;
    for(int i = 0; i < s.size(); i++){
        string ss= "";
        for(int j = 0; j < n; j++){
            ss+=s[i+j];
        }
        v[ss] = v[ss] + 1;
        if(v[ss] == 1){
            fir[ss] = i;
        }
        if(v[ss] > maxn
        ||(v[ss] == maxn&&maxs.size() < ss.size())
        ||(v[ss] == maxn&&maxs.size() == ss.size()&&fir[ss] < f))
        {
            maxs = ss;
            maxn = v[ss];
            f = fir[ss];
        }
        //cout << ss << " " << v[ss] << endl;
        for(int j = n; j + i < s.size(); j++){
            ss+=s[i+j];
            v[ss]++;
            if(v[ss] == 1)fir[ss] = i;
            if(v[ss] > maxn
            ||(v[ss] == maxn&&maxs.size() < ss.size())
            ||(v[ss] == maxn&&maxs.size() == ss.size()&&fir[ss] < f))
            {
                maxs = ss;
                maxn = v[ss];
                f = fir[ss];
            }
        }
    }
    cout << maxs;
    return 0;
}