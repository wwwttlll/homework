#include<bits/stdc++.h>
using namespace std;
int t1,t2,t3;
int v1,v2,v3;
int main(){
    ios::sync_with_stdio(false);
    while(cin >> t1 >> t2 >>t3){
        int flag = 0;
        cin >> v1 >>  v2 >> v3;
        for(int i = 0; i <= 100; i++){
            for(int j = 0; j <= 100 ; j++){
                for(int k = 0; k <= 100; k++){
                    if(v3*(i*24+t3) == v2*(j*24 + t2)&& v2*(j*24 + t2) == v1*(k*24+t1)){
                        cout << v3*(i*24+t3) << endl;
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1)break;
            }
            if(flag == 1)break;
        }
    }
    return 0;
}