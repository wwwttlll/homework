#include<bits/stdc++.h>
using namespace std;
struct note{
    char s[20];
    int time;
    int ac;
}a[10000];
bool cmp (note a,note b){
    if(a.ac != b.ac)return a.ac > b.ac;
    else if (a.time != b.time) return a.time < b.time;
    else return a.s[0] < b.s[0];
}
signed main(){
    int n,m;
    cin  >> n >> m;
    int cnt = 0;
    while(scanf("%s",a[cnt].s)!=EOF){
        //cout << a[cnt].s << endl;
        for(int i = 1; i <= n; i++){
            int x,y;
            char c;
            cin >> x;
            if(x > 0){
                a[cnt].ac++;
                a[cnt].time += x;
                c = getchar();
                if(c == '('){
                    cin >> x;
                    a[cnt].time += x * m;
                    c = getchar();
                }
            }
        }
        cnt++;
    }
    sort(a, a + cnt,cmp);
    for(int i = 0; i < cnt; i++){
        printf("%-10s %2d %4d\n",a[i].s,a[i].ac,a[i].time);
    }
    return 0;
}
/*
8 20 
Smith -1 -16 8 0 0 120 39 0 
John 116 -2 11 0 0 82 55(1) 0 
Josephus 72(3) 126 10 -3 0 47 21(2) -2 
Bush 0 -1 -8 0 0 0 0 0 
Alice -2 67(2) 13 -1 0 133 79(1) -1 
Bob 0 0 57(5) 0 0 168 -7 0
*/
/*
8 20 
Smith -1 -16 8 0 0 120 39 0 
John 116 -2 11 0 0 82 55(1) 0 
Josephus 72(3) 126 10 -3 0 47 21(2) -2 
Bush 0 -1 -8 0 0 0 0 0
Alice -2 67(2) 13 -1 0 133 79(1) -1 
Bob 0 0 57(5) 0 0 168 -7 0
Arris 0 -3 0 0 0 0 0 -2
*/