#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
void f(char *p[], int n){
    char *t;
    int i,j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(strcmp(p[i],p[j])>0)
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
}
int main(){
    char *p[5]= {"abc","aabdfg","abbd", "dcdbe", "cd"};
    f(p, 5);
    cout<<strlen(p[1]);
    for(int i = 0; i < 5; i++){
        cout << p[i] << endl;
    }
}