#include<bits/stdc++.h>
using namespace std;
#define int long long
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int t;
struct note{//花色 数字
    char a;
    int b;
}a[1000];
bool cmp(note x,note y){
    if(x.b != y.b){
        return x.b > y.b;
    }
    else{
        return x.a > y.a;
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin >> t;
    for(int i = 1; i <= t; i++){
        if(i > 1)cout << endl;
        for(int j = 1; j <= 4; j++){
            for(int k = 1; k <= 13; k++){
                char x,y;
                cin >> x >> y;
                a[k].a = x;
                if(y <= '9'&&y >= '0'){
                    a[k].b = y - '0';
                }
                else{
                    if(y == 'J'){
                        a[k].b = 11;
                    }
                    if(y == 'Q'){
                        a[k].b = 12;
                    }
                    if(y == 'K'){
                        a[k].b = 13;
                    }
                    if(y == 'T'){
                        a[k].b = 10;
                    }
                    if(y == 'A'){
                        a[k].b = 14;
                    }
                }
            }
            sort(a + 1, a + 1 + 13,cmp);
            for(int k = 1; k <= 13; k++){
                cout << a[k].a;
                if(a[k].b < 10&&a[k].b > 1)cout << a[k].b;
                else{
                    if(a[k].b == 10)cout << 'T';
                    if(a[k].b == 11)cout << "J";
                    if(a[k].b == 12)cout << 'Q';
                    if(a[k].b == 13)cout << 'K';
                    if(a[k].b == 14)cout << 'A';
                }
                if(k == 13)cout << endl;
                else cout << " ";
            }

        }
    }
    return 0;
}