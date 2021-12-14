#include<bits/stdc++.h>
using namespace std;
//长方形集合
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
class Point{
    public:
    int x,y ;
    Point(int xx = 0,int yy = 0):x(xx),y(yy){
    }
};
class rectangle{
    int num; Point topLeft; int width; int height;int s;
    public:
    rectangle(int num = 0, int x = 0, int y = 0, int width = 0, int height = 0){
        this -> num = num;
        topLeft = Point(x,y);
        this -> width = width;
        this -> height = height;
        s = width * height;
    }
    int GetS(){
        return s;
    }
    friend class RectangleCollection;
};
class RectangleCollection{
    rectangle rects[111];   //一个包含长方形的数组，最多100个元素
    int count = 0;            //以上数组中长方形的实际个数
    public:
    void addRectangle(rectangle r);
    void deleteRectangle(int num) ;
    int inRects(Point p);
    bool judge(Point p,int x);
};
void RectangleCollection::addRectangle(rectangle r){
    rects[r.num] = r;
    count ++;
}
void RectangleCollection::deleteRectangle(int num){
    rects[num] = 0;
    count --;
}
bool RectangleCollection::judge(Point p,int i){
    if((p.x) > (rects[i].topLeft.x) && (p.y) > (rects[i].topLeft.y) && (p . x) < ((rects[i].topLeft.x) + (rects[i].width)) &&  (p.y) < ((rects[i].topLeft.y) + (rects[i].height)))return true;
    else return false;
}
int RectangleCollection::inRects(Point p){
    long long sum = 0;
    for(int i = 0; i <= 100; i++){
        if(judge(p,i)){
            sum += rects[i].GetS();
        }
    }
    return sum;
}
int main()
{
    int num, topLeftX, topLeftY, width, height;
    int px, py;
    int op;
    RectangleCollection rc;
    rectangle r;
    Point p;
    while (cin >> op){
        switch (op){
            case 1:
                cin >> num >> topLeftX >> topLeftY >> width >> height;
                r = rectangle(num, topLeftX, topLeftY, width, height);
                rc.addRectangle(r);
                break;
            case 2:
                cin >> num;
                rc.deleteRectangle(num);
                break;
            case 3:
                cin >> px >> py;
                p=Point(px, py);
                cout << rc.inRects(p) << endl;
                break;
        }
    }
    return 0;
}