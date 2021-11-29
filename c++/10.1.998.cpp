#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
double d1,c,d2,p;
int n;
struct note{
    double d,v;
};
note a[1011];
note b[1011];
bool cmp(note a, note b){
    return a.d < b.d;
}
int main(){
    cin >> d1 >> c >> d2 >> p >> n;//距离 容量 每升距离 初始价格 加油站
    double maxn = c * d2;
    for(int i = 1; i <= n; i++){
        cin >> a[i].d >> a[i].v;
        //cout << "qwq" << endl;
    }
    a[0].d = 0;
    a[0].v = p;
    a[n+1].d = d1;
    a[n+1].v = 1e9 +11;
    double cost = 0.0;
    sort(a , a + 1 + n, cmp);
    int last = 0;//上次加油地点
    int minn = 0;
    double left = 0;
    int f = 0;
    for(int i = 1; i <= n; i++){
        if(a[i].d - a[i-1].d > maxn){
            cout << "No Solution" << endl;
            return 0;
        }
    }
    for(int i = 1; i <= n + 1; i++){
        if((a[i].d - a[last].d) <= maxn && a[i].v <= a[last].v){//范围内小的
            cost += ((a[i].d - a[last].d) / d2 - left) * a[last].v;
            last = i;
            minn = i + 1;
            left = 0;
        }else{
            if(a[n+1].d - a[last].d <= maxn){//可以直接到终点 且 范围内无更小的
                int ff = 1;
                for(int j = i; j <= n; j++){
                    if((a[j].d - a[last].d) <= maxn && a[j].v <= a[last].v){//范围内小的
                        cost += ((a[j].d - a[last].d) / d2 - left) * a[last].v;
                        last = j;
                        minn = j;
                        left = 0;
                    }
                }
                break;
            }
            if((a[i].d - a[last].d) > maxn){ //范围内无更小的
                cost += c * a[last].v;
                left = c - (a[minn].d - a[last].d)/d2;
                last = minn;
            }
            if(a[i].v <= a[minn].v){
                minn = i;
            }
        }
    }
    cost += ((a[n+1].d - a[last].d)/d2 - left) * a[last].v;
    printf("%.2f",cost);
}