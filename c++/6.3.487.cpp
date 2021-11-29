#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int t;
signed main(){
    t = read();
    while(t--){
        string s;
        cin >> s;
        int ans = -1;
        priority_queue<int>q;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '5'&& s[i] <= '9'&&s[i] >= '0'){
                if(ans == -1)ans = 0;
                ans = ans * 10 + (s[i] - '0');
            }else{
                if(ans == -1)continue;
                else{
                    //cout << ans << endl;
                    q.push(-ans);
                    ans = -1;    
                }
            }
        }
        if(ans != -1)
            q.push(-ans);
        while(q.size()){
            cout << -q.top();
            q.pop();
            if(q.size())cout << " ";
        }
        cout << endl;
    }
    return 0;
}