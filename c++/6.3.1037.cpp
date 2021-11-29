#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
map<string , int>m;
map<string ,string>mm;
map<string , int>mmm;
string id[1000];
string s = "";
string l1,l2;
signed main(){
    ios::sync_with_stdio(false);
    getline(cin,l1);
    int cnt = 0;
    for(int i = 0; i < l1.size(); i++){
        if(l1[i]!=' '){
            s+=l1[i];
        }
        else{
            id[++cnt] = s;
            string ss = s;
            sort(s.begin(), s.end());
            m[s] = 1;
            mm[s] = ss;   
            s = "";
        }
    }
    id[++cnt] = s;
    string ss = s;
    sort(s.begin(), s.end());
    m[s] = 1;
    mm[s] = ss;   
    s = "";
    getline(cin,l2);
    int num = 0;
    for(int i = 0; i < l2.size(); i++){
        if(l2[i]!=' '){
            s+=l2[i];
        }
        else{
            sort(s.begin(), s.end());
            if(m[s] == 1){
                if(mmm[mm[s]] == 0)num++;
                mmm[mm[s]]++;
            }
            s = "";
        }
    }
    sort(s.begin(), s.end());
    if(m[s] == 1){
    if(mmm[mm[s]] == 0)num++;
        mmm[mm[s]]++;
    }
    s = "";
    for(int i = 1; i <= cnt; i++){
        if(mmm[id[i]] > 0){
            num--;
            cout << id[i];
            if(num == 0)cout << endl;
            else cout << " ";
        }
    }
    return 0;
}