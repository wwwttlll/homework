#include<bits/stdc++.h>
using namespace std;
int zx[30],zy[30],x[30],y[30];
int zx2[30],zy2[30],x2[30],y2[30];
int n,cnt;
int mp[30][30];
int a,b;
void dfs1(int x){
	if(x==n){
        cnt++;
        return;
	}else{
		for(int i=0;i<n;i++){
			if(y2[i]==0&&zx2[x+i]==0&&zy2[x-i+n]==0&&mp[x][i] == 1){
				y2[i]=1;
				zx2[x+i]=1;
				zy2[x-i+n]=1;
				dfs1(x+1);
				y2[i]=0;
				zx2[x+i]=0;
				zy2[x-i+n]=0;
			} 
		}
	}
}
void dfs(int x){
	if(x==n){
        dfs1(0);
        return;
	}else{
		for(int i=0;i<n;i++){
			if(y[i]==0&&zx[x+i]==0&&zy[x-i+n]==0&&mp[x][i] == 1){
				y[i]=1;
				zx[x+i]=1;
				zy[x-i+n]=1;
                mp[x][i] = 0;
				dfs(x+1);
				y[i]=0;
                mp[x][i] = 1;
				zx[x+i]=0;
				zy[x-i+n]=0;
			} 
		}
	}
}
signed main(){
    //ios::sync_with_stdio(false);
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            cin >> mp[i][j];
        }
    }
    dfs(0);
    cout<<cnt<<endl;
}
