#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n){
        set<int> s;
        for(int i = 1; i <= n ;i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        set<int> :: iterator it = s.begin();
        while (it!=s.end()){
			cout<<*it;
			it++;
            if(it == s.end()){
                cout << endl;
            }else{
                cout << " ";
            }
		}
    }
    return 0;
}