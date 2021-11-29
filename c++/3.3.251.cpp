#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,i;
    while (scanf("%d",&k)!=EOF){
        int flag=1,m=k;
        while (flag){
            m++;
            int cursor=0;
            for (i=0; i<k; i++){
                cursor=(cursor+m-1)%(2*k-i);
                if (cursor<k)break;
                if (i==k-1)flag=0;
            }
        }
        printf("%d\n",m);
    }
    return 0;
}