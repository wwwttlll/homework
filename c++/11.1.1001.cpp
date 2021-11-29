#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n,k;
int arr[11];
int v[11];
vector <int >a[100];
int cnt = 0;
void dfs(int x,int last){
    if(x == n){
        cnt ++;
        if(cnt == k){
            for(int i = 0; i < n; i++){
                cout << arr[i];
                if(i == n - 1)cout << endl;
                else cout << " ";
            }
        }
        return;
    }
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            int f = 0;
            for(int j = 0; j < a[i].size(); j++){
                if(a[i][j] == last){
                    f = 1;
                    break;
                }
            }
            if(f == 1) continue;
            v[i] = 1;
            arr[x] = i;
            dfs(x + 1,i);
            v[i] = 0;
        }
    }
}
int main(){
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x = read();
            if(i == j)continue;
            if(x == 0){
                a[j].push_back(i);//j这个数不能出现在i这个数后面
                // i在j后1在2后
            }
        }
    }

    dfs(0,-1);
    return 0;
}