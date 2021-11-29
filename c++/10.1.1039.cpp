#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int t;
int n,m;
char mp[100][100];
bool in(int x,int y){
    return x <= n && x >= 1 && y <= n && y >= 1;
}
int sx,sy;
int main(){
    t = read();
    while(t--){
        n = read();
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                scanf("%c",&mp[i][j]); 
                if(mp[i][j] == 'S'){
                    sx = i;
                    sy = j;
                }
            }getchar();
        }
        /*for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << mp[i][j] ;
            }
            cout << endl;
        }*/
        m = read();
        for(int i = 1; i <= m; i++){
            string s;
            cin >> s;
            int x = sx,y = sy;
            int f = 0;
            for(int j = 0; j < s.size(); j++){
                if(s[j]=='D')x++;
                if(s[j]=='U')x--;
                if(s[j]=='L')y--;
                if(s[j]=='R')y++;
                //cout << x << " " << y << endl;
                if(!in(x,y)){
                    printf("I am out!\n");
                    f = 1;
                    break;
                }
                if(mp[x][y] == '#'){
                    printf("I am dizzy!\n");
                    f = 1;
                    break;
                }
                if(mp[x][y] == 'T'&&f == 0){
                    printf("I get there!\n");
                    f = 1;
                    break;
                }
            }
            if((mp[x][y] == '.'|| mp[x][y] == 'S')&&f == 0){
                printf("I have no idea!\n");
            }
        }
    }
    return 0;
}