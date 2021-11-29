#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n;

vector<int >v;
int main(){
    cin >>  n;getchar();
    for(int i = 1; i <= n; i++){
        
        string s; 
        getline(cin,s);
        stringstream ss(s);
        int a;
        while(ss >> a){
            v.push_back(a);
        }
    }
    sort(v.begin(), v.end());
    int x,y;
    for(int i = 1; i < v.size(); i++){
        //cout << v[i] << endl;
        if(v[i] != v[i-1] + 1){
            if(v[i] == v[i-1] )x = v[i];
            else y = v[i] - 1;
        }
    }

    cout << y << " " << x << endl;
    return 0;
}