#include <bits/stdc++.h>
using namespace std;
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
int distance(int x,int y,int xx,int yy){
    return hypot(x-xx,y-yy);
}
double distance(double x,double y,double xx,double yy){
    return hypot(x-xx,y-yy);
}
int main()
{
    int i_x1, i_y1, i_x2, i_y2;
    double d_x1, d_y1, d_x2, d_y2;
    cin >> i_x1 >> i_y1 >> i_x2 >> i_y2;
    cin >> d_x1 >> d_y1 >> d_x2 >> d_y2;
    cout << distance(i_x1, i_y1, i_x2, i_y2) << endl;
    cout << distance(d_x1, d_y1, d_x2, d_y2) << endl;
    return 0;
}