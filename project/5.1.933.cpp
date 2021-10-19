#include<bits/stdc++.h>
using namespace std;
int n;
int mp[100][100];
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    
        for(int i = 1; i <= (2*n-1); i++){
            for(int j = 1; j <= (2*n-1); j++){
                cout << min(min(i,2*n-i),min(j,2*n-j));
                if(j == (2*n-1)){
                    cout << endl;
                }else{
                    cout <<" ";
                }
            }

        }
    
    return 0;
}