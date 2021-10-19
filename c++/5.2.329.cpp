#include<bits/stdc++.h>
using namespace std;
char a[11][11];
char b[11][11];
char c[11][11];
char d[11][11];
int n;
int t1(){//90
    int flag = 1;
    for(int i = 0; i < n; i++){//先逆时针90
        for(int j = 0; j < n; j++){
            c[i][j] = a[j][n-i-1];
        }
    }
    for(int i = 0; i < n; i++){//再逆时针180
        for(int j = 0; j < n; j++){
            d[i][j] = c[n-i-1][n-j-1];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(d[i][j] != b[i][j]){
                flag = 0;
                break;
            }
        }
        if(flag == 0)break;
    }
    return flag;
}
int t2(){//180
    int flag = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != a[n-i-1][n-j-1]){
                flag = 0;
                break;
            }
        }
        if(flag == 0)break;
    }
    return flag;
}
int t3(){//270
    int flag = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != a[j][n-i-1]){
                flag = 0;
                break;
            }
        }
        if(flag == 0)break;
    }
    return flag;
}
int r1(){
    int flag = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][n - j - 1] != b[i][j]){
                flag = 0;
                break;
            }
        }if(flag == 0)break;
    }return flag;
}
int same(){
    int flag = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(c[i][j] != b[i][j]){
                flag = 0;
                break;
            }
        }if(flag == 0)break;
    }return flag;
}
int main(){
    //ios::sync_with_stdio(false);
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%s",a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%s",b[i]);
    }
    if(t1())cout << 1 << endl;
    else if(t2())cout << 2 << endl;
    else if(t3())cout << 3 << endl;
    else if(r1())cout << 4 << endl;
    
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                c[i][j] = a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][n - j - 1] = c[i][j];
                swap(a[i][n-j-1],c[i][j]);
            }
        }
        
        if(t1()||t2()||t3()){
            cout << 5 << endl;
        }else if(same())cout << 6 << endl;
        else cout << 7 << endl;
    }
    return 0;
}