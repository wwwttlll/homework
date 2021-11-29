#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int s;
int a[200];
int main(){
    for(int i = 1; i <= 200; i++){
        a[i] = a[i-1] + i;
    }
    while(cin >> s){
        if(s == 0)break;
        int id;
        for(int i = 1; i <= 200; i++){
            if(a[i] > s){
                id = i;
                break;
            }
        }
        if(id % 2 == 1)id++;
        int cha = a[id] - s;
        if (cha % 2 == 0 || (cha / 2) % 2 == 0){
            puts("Impossible");
        }
        else{
            cout << id << " " << cha / 2 << " " << cha / 2 + 1 << endl;
        }
    }
    return 0;
}