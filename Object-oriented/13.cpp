#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
class ID{
    string s;
    int year = 0, month = 0, day = 0;//分别表示持证人的出生年、月、日
    char sex;
    char y;
    public:
        void set_ID(char *c){
            s = c;
            //cout << year << " " << month << " " << day << endl;
        }
        void fun(){
            for(int i = 6; i < 10; i++){
                int x = s[i] - '0';
                //cout << x;
                year = year * 10 + x;
            }
            for(int i = 10; i < 12; i++){
                month = month * 10 + (s[i] - '0');
            }
            for(int i = 12; i < 14; i++){
                day = day * 10 + (s[i] - '0');
            }
            if(s[16] & 1)sex = 'M';
            else sex = 'F';
            if(sex == 'F'){
                if(2015 - year < 40 || 2015 - year == 40 && month >= 10 ){
                    y = 'Y';
                }
                else y = 'N';
            }else{
                if(2015 - year < 35 || 2015 - year == 35 && month >= 10){
                    y = 'Y';
                }
                else y = 'N';
            }
        }
        void print(){
            cout << s << endl;
            printf("%d.%d.%d\n",year,month,day);
            printf("%c\n",sex);
            printf("%c\n",y);
        }
};
int main(){ 
   int T, i;
   char id[19];
   cin>>T;
   ID person[T];
   for(i = 0; i < T; i++){
      if(i> 0 && i < T) cout<<endl;
      cin>>id;
      person[i].set_ID(id);
      person[i].fun();
      person[i].print();
   }     
   return 0;
} 