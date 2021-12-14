#include<bits/stdc++.h>
using namespace std;
//字符串填充（默认形参）
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
string padLeft(string string1, int n, char padding=' '){
    if(string1.size() >= n){
        return string1;
    }else{
        string ss;
        for(int i = 1; i <= n - string1.size(); i++){
            ss += padding;
        }
        return ss + string1;
    }
}
string padRight(string string1, int n, char padding=' '){
    if(string1.size() >= n){
        return string1;
    }else{
        string ss;
        for(int i = 1; i <= n - string1.size(); i++){
            ss += padding;
        }
        return string1 + ss;
    }
}
int main()
{
 int num, length;
 char padding;
 string src, dest;

 while(cin >> num)
 {
  switch(num)
  {
   case 11:
    cin >> src >> length;
    cout << padLeft(src, length) << endl;
    break;
   case 12:
    cin >> src >> length >> padding;
    cout << padLeft(src, length, padding) << endl;
    break;
   case 21:
    cin >> src >> length;
    cout << padRight(src, length) << endl;
    break;
   case 22:
    cin >> src >> length >> padding;
    cout << padRight(src, length, padding) << endl;
    break;
  }
 }
 return 0;
}