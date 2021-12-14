#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}

int main()
{
    int topLeftX, topLeftY, topRightX, topRightY, bottomLeftX, bottomLeftY, bottomRightX, bottomRightY;
    int px, py;

    cin >> topLeftX >> topLeftY >> topRightX >> topRightY >> bottomLeftX >> bottomLeftY >> bottomRightX >> bottomRightY;
    cin >> px >> py;

    Point p(px, py);
    Rectangle r(Point(topLeftX, topLeftY), Point(topRightX, topRightY), Point(bottomLeftX, bottomLeftY), Point(bottomRightX, bottomRightY));
    cout << r.getArea() << endl;
    if (r.isIn(p))
            cout << "In" << endl;
    else
            cout << "Not in" << endl;

    return 0;
}