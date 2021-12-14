#include <bits/stdc++.h>
using namespace std;
//删除字符(函数重载)
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
string remove(string s,char c){
    string ss = "";
    for(int i = 0; i < s.size(); i ++){
        if(s[i] == c){
            continue;
        }
        ss += s[i];
    }
    return ss;
}
string remove(string s,int idx){
    if(idx < 0 || idx > s.size())return s;
    string ss = "";
    for(int i = 0; i < s.size(); i++){
        if(i == idx)continue;
        ss += s[i];
    }
    return ss;
}
string remove(string s,int l, int r){
    if(l < 0 || r > s.size() - 1)return s;
    string ss  = "";
    for(int i = 0; i < s.size(); i++){
        if(i <= r && i >= l)continue;
        ss += s[i];
    }
    return ss;
}
int main()
{
    int num, index, startIndex, endIndex;
    char delChar;
    string src, dest;
    while (cin >> num)
    {
        switch (num)
        {
        case 1:
            cin >> src >> delChar;
            cout << remove(src, delChar) << endl;
            break;
        case 2:
            cin >> src >> index;
            cout << remove(src, index) << endl;
            break;
        case 3:
            cin >> src >> startIndex >> endIndex;
            cout << remove(src, startIndex, endIndex) << endl;
            break;
        }
    }
    return 0;
}