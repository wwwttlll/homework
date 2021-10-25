#include<bits/stdc++.h>
using namespace std;
int n;
struct note{
    int a,id,sc;
    string name,g;
}a[100000];
bool cmp(note a, note b){
    return a.sc < b.sc;
}
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].id >> a[i].name>> a[i].g>> a[i].a>> a[i].sc;
    }
    sort(a + 1, a + 1 + n, cmp);

    for(int i = 1; i <= n ; i++){
        cout <<a[i].id<<" " << a[i].name<<" " <<  a[i].g<< " " << a[i].a<<" "<< a[i].sc << endl;
    }
    return 0;
}