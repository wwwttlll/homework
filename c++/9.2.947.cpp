#include<bits/stdc++.h>
using namespace std;
int zx[30],zy[30],x[30],y[30];
int n,cnt;
int mp[30][30];
int a,b;
void dfs(int x){
	if(x==n){
        cnt++;
        return;
	}else{
		for(int i=0;i<n;i++){
			if(y[i]==0&&zx[x+i]==0&&zy[x-i+n]==0&&mp[x][i] == 0){
				y[i]=1;
				zx[x+i]=1;
				zy[x-i+n]=1;
				dfs(x+1);
				y[i]=0;
				zx[x+i]=0;
				zy[x-i+n]=0;
			} 
		}
	}
}
signed main(){
    //ios::sync_with_stdio(false);
    cin>>n>> a>> b;
    a--,b--;
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            if(i + a >= 0 && b + j >= 0)
                mp[a + i][b + j] = 1;
        }
    }
    dfs(0);
    cout<<cnt<<endl;
}
