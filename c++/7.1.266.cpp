#include<iostream>
using namespace std;
int n,ans;
double x;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x < 60.0){
            ans++;
        }
    }
    cout << ans;
}
/*涉嫌抄袭？？？题目不就这么要求的吗
int tongji(float mark[], int n){
    int cnt = 0;
    for(int i = 0; i < n ;i++){
        if(mark[i] < 60)cnt++;
    }
    return cnt;
}
int main ()
{

   float mark[40];

   int m,n,count;

   cin>>n;

   for (m=0;m<n;m++)

   {

      cin>>mark[m];

   }

    count=tongji(mark, n);

    cout << count;

    return 0;

}*/