#include<bits/stdc++.h>
using namespace std;
int n;
char c;
int l = n,r = n;
void up(int x){
    if(l == r&&x == l){
        l++;
        r--;
        cout <<c << endl;
        c--;
        return;
    }
    if(x == l){
        l++;
        cout << c << endl;
        c--;
    }
    else if(x == r){
        r--;
        cout << c;
        c--;
    }else{
        cout <<' ';
    }
}
void down(int x){
    if(x == l){ 
    	l--;
    	r--;
    	l--;
		r++; 
        cout  << c << endl;
        c--;
    }
    else if(x == r){
    	
        cout << c;
        c--;
    }
    else{
        cout <<' ';
    } 
}
int main(){
    ios::sync_with_stdio(false);
    int cnt = 1;
    while(cin >> n){
    	if(cnt!=1)cout << endl;
    	cnt++;
        c = 'Z';
        l = r = n;
        for(int i = n; i <= 2*n - 1; i++){
            for(int j = 1; j <= i; j++){
                up(j);
            }
        }
        l-=2;
        r+=2;
        for(int i = 2*n - 1; i >= n; i--){
            for(int j = 1; j <= i; j++){
                if(l >= r)
                    down(j);
            }
        }
    }
    return 0;
}