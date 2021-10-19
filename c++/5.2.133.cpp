//卡输出的傻逼题
#include<iostream>
#include<algorithm>
#include<cstring>
#include<iomanip>
using namespace std;
int n;
int mp[1000][1000];
int ok[1000];
int main(){
    int tt = 1;
    while((cin >> n)){
        if(tt!=1){  
            cout << endl;
        }tt++;
        memset(mp,0,sizeof mp);
        int l=500,r=500,up=500,down=500;
        int i = 1, x=500,y=500;
        mp[500][500]=1;
        while(i < n){
            i++;
            if(!mp[x][y-1]&&!mp[x][y+1]&&!mp[x+1][y]&&!mp[x-1][y]){
                x++;
                if(i >= 10){
                    ok[y]=1;
                }
                mp[x][y] = i;
                up = min(up,x);
                down = max(down,x);
                l = min(l,y);
                r = max(r,y);
                continue;
            }
            if(mp[x-1][y]&&!mp[x][y+1]&&!mp[x+1][y]){//up 有 right 空 down 空 向右
                y++;
                if(i >= 10){
                    ok[y]=1;
                }
                mp[x][y] = i;
                up = min(up,x);
                down = max(down,x);
                l = min(l,y);
                r = max(r,y);
                continue;
            }
            if(mp[x][y-1]&&!mp[x-1][y]){//左 有 右空 向上
                x--;
                if(i >= 10){
                    ok[y]=1;
                }
                mp[x][y] = i;
                up = min(up,x);
                down = max(down,x);
                l = min(l,y);
                r = max(r,y);
                continue;
            }
            if(!mp[x][y-1]&&!mp[x-1][y]&&mp[x+1][y]){//left 空 up 空 down 有 向左
                y--;
                if(i >= 10){
                    ok[y]=1;
                }
                mp[x][y] = i;
                up = min(up,x);
                down = max(down,x);
                l = min(l,y);
                r = max(r,y);
                continue;
            }
            if(!mp[x+1][y]&& mp[x][y+1]){//up 空 down空 right 有 向下
                x++;
                if(i >= 10){
                    ok[y]=1;
                }
                mp[x][y] = i;
                up = min(up,x);
                down = max(down,x);
                l = min(l,y);
                r = max(r,y);
                continue;
            }
            if(!mp[x][y-1]&&!mp[x][y+1]&&mp[x-1][y]){//left 空 right 空 up 有 向右
                y++;
                if(i >= 10){
                    ok[y]=1;
                }
                mp[x][y] = i;
                up = min(up,x);
                down = max(down,x);
                l = min(l,y);
                r = max(r,y);
                continue;
            }
        }
        for(int i = up; i <= down; i++){
            for(int j = l; j <= r; j++){
                if(mp[i][j]){
                    if(ok[j])
                        cout << setw(2) << right << mp[i][j] ;
                    else{
                        cout<< mp[i][j];
                    }
                }else{
                    if(ok[j])
                        cout /*<< setw(2)*/ << "  ";
                    else{
                        cout << " ";
                    }
                }
                if(mp[i][j]&&!mp[i][j+1]){
                    cout << endl;
                    break;
                }
                if(j == r){
                    cout << endl;
                }else cout <<" ";
                
            }
        }
    }
    return 0;
}