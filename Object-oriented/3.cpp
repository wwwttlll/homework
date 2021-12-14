#include <bits/stdc++.h>
using namespace std;
//盒子类
long long read()
{
    long long ret = 0, f = 1;
    char ch = getchar();
    while (ch > '9' || ch < '0')
    {
        if (ch == '-')
            f = -f;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        ret = ret * 10 + ch - '0', ch = getchar();
    return ret * f;
}
string cpy(string s){
    return s;
}
string cpy(string s,int idx){
    string ss = "";
    if(idx < 0 || idx > s.size() - 1)return ss;
    for(int i = idx; i < s.size(); i++){
        ss += s[i];
    }
    return ss;
}
string cpy(string s,int l, int r){
    string ss  = "";
    if(l < 0 || r > s.size() - 1)return ss;
    for(int i = l; i <= r; i++){
        ss += s[i];
    }
    return ss;
}
int main()
{
    int num, length, index, startIndex, endIndex;
    string src, dest;

    while (cin >> num)
    {
        switch (num)
        {
        case 1:
            cin >> src;
            cout << cpy(src) << endl;
            break;
        case 2:
            cin >> src >> startIndex;
            cout << cpy(src, startIndex) << endl;
            break;
        case 3:
            cin >> src >> startIndex >> endIndex;
            cout << cpy(src, startIndex, endIndex) << endl;
            break;
        }
    }
    return 0;
}