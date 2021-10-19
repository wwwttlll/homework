#include<bits/stdc++.h>
using namespace std;
int n;
pair<int , pair<int ,int > >a[31];
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].first>>a[i].second.first>>a[i].second.second;
    }
    sort(a + 1, a + 1 + n );
    cout << a[n].first<<" " << a[n].second.first<<" "<<a[n].second.second<<endl;
    cout << a[1].first<<" " << a[1].second.first<<" "<<a[1].second.second<<endl;
    
}