#include<bits/stdc++.h>
using namespace std;
//类和对象：使用日期类计算相隔天数
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
bool isrun(int y){
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))return true;
    else return false;
}
int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
class Date{
    int year;
    int month;
    int day; 
    public:
    Date(int y,int m,int d):year(y),month(m),day(d){};  
    int getYear() const {return year;}
    int getMonth() const {return month;}
    int getDay() const {return day;}
}; 
int CalDay(const Date &d1, const Date &d2){
    int sum = 0;
    if(d1.getYear()!=d2.getYear()){
        for(int i = d1.getYear() + 1; i < d2.getYear(); i++){//间隔年
            //cout << i << " " << d1.getYear() + 1<<" " << d2.getYear() - 1 << endl;
            if(isrun(i))sum += 366;
            else sum+=365;
        }
        sum+=d2.getDay();//d2本月
        int f = 0;
        if(isrun(d2.getYear()))f = 1;
        for(int i = 1; i < d2.getMonth();i++){//d2之前的月
            if(i == 2 && f == 1){
                sum += 29;
            }else sum += d[i];
        }
        f = 0;
        if(isrun(d1.getYear()))f = 1;
        if(f == 1 && d1.getMonth() == 2){//d1本月剩余
            sum += 29 - d1.getDay();
        }
        else{
            sum += d[d1.getMonth()] - d1.getDay();
        }
        for(int i = d1.getMonth() + 1; i <= 12 ;i++){//d1之后的月
            if(i == 2 && f == 1){
                sum += 29;
            }
            else sum += d[i];
        }
    }else if(d1.getMonth()!=d2.getMonth()){
        sum+=d2.getDay();//d2本月
        int f = 0;
        if(isrun(d1.getYear()))f = 1;
        if(f == 1 && d1.getMonth() == 2){//d1本月剩余
            sum += 29 - d1.getDay();
        }
        else{
            sum += d[d1.getMonth()] - d1.getDay();
        }
        for(int i = d1.getMonth() + 1; i < d2.getMonth();i++){//d2之前的月
            if(i == 2 && f == 1){
                sum += 29;
            }else sum += d[i];
        }
    }else{
        sum = d2.getDay()-d1.getDay();
    }
    
    return sum;
}
int main(){    
    int y1,m1,d1,y2,m2,d2;
    cin>>y1>>m1>>d1;
    cin>>y2>>m2>>d2;
    Date date1(y1,m1,d1);  
    Date date2(y2,m2,d2);     
    cout<<CalDay(date1,date2);
    return 0;
}