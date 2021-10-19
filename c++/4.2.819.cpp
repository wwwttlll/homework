#include<bits/stdc++.h>
using namespace std;
int n;
int x;
priority_queue<int, vector<int>, greater<int> >q;
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        q.push(x);
    }
    int ans = 0;
    while(q.size() >= 2){
        int sum = 0;
        //cout << q.top();
        sum += q.top();
        q.pop();
        //cout << q.top()<<endl;
        sum += q.top();
        q.pop();
        q.push(sum);
        ans += sum;
    }
    cout << ans << endl;
    return 0;
}