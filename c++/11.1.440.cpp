#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n, pre = 1;
char mark[20];
void dfs(int x,int sum){
    if (x==n)       {
        if (sum==0) {
            printf("1");
            for (int j=1; j<n; j++)
                printf("%c%d",mark[j],j+1); 
            printf("\n");
        }
        return ;
    }
    mark[x] = ' '; 
    int tpre = pre, tsum = sum;
    pre = tpre;
    sum = tsum;
    if(pre > 0) pre = pre * 10 + x + 1;
    else pre = pre * 10 - (x + 1);
    sum = sum + pre - tpre;
    dfs(x + 1, sum);
    pre = tpre;
    sum = tsum;
    mark[x] = '+';
    sum += x+1;
    pre = x + 1;
    dfs(x + 1,sum);
    pre = tpre;
    sum = tsum;
    mark[x] = '-';
    sum -= x+1;
    pre = -x - 1;
    dfs(x + 1,sum);
}
int main(){
    cin >> n;
    dfs(1,1);
    return 0;
}