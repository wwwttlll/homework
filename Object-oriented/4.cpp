#include<bits/stdc++.h>
using namespace std;
//盒子类
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
class Box{
    int l,w,h,v,s;
    public:
    void initBox (int l,int w,int h){
        this -> l = l;
        this -> w = w;
        this -> h = h;
    }

    void setVolume(){
        v = l * w * h;
    }

    void setArea(){
        s = 2 * l * w + 2 * l * h + 2 * w * h;
    }

    void show(){
        printf("%d %d %d\n",l,w,h);
        printf("%d\n",v);
        printf("%d",s);
    }
};
int main()

{ 

     int intLength, intWidth, intHeight;

     Box box;  

     cin>>intLength;

     cin>>intWidth;

     cin>>intHeight;

     box.initBox(intLength,intWidth,intHeight); 

     box.setVolume(); 

     box.setArea(); 

     box.show(); 

     return 0;

}