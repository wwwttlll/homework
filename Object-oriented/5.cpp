#include<bits/stdc++.h>
using namespace std;
//学生数组排序
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
class student{
    string id;
    int math , english;
    int total;
    public:
    student(string x = "",int y = 0,int z = 0):id(x),math(y),english(z)
    {

    }
    string getName(){
        return id;
    }
    int getMath(){
        return math;
    }
    int getEnglish(){
        return english;
    }
    int getTotal(){
        return total;
    }
    void calcTotal(){
        total = math + english;
    }
    friend void sortStudent(student *a,int n);
};
void Swap(student &a,student &b){
    student c = a;
    a = b;
    b = c;
}
void sortStudent(student *a,int len){
    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - 1 - i; j++)
            if (a[j].total < a[j + 1].total)
                Swap(a[j], a[j + 1]);
}
int main(){
    student s[3],temp;
    string sName;//或char sName[20];
    int sMath, sEnglish;
    int i;
    for(i=0; i<3; i++){
        cin>>sName>>sMath>>sEnglish;
        s[i]=student(sName, sMath, sEnglish);
        s[i].calcTotal();
    }
    sortStudent(s, 3);
    for(i=0;i<3;i++){
        cout << s[i].getName()<<" "<<s[i].getMath()<<" "<<s[i].getEnglish()<<" "<<s[i].getTotal()<<endl;
    }
    return 0;

}