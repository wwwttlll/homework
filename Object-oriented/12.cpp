#include<bits/stdc++.h>
using namespace std;
//12 计算学生总评成绩并排序（友元函数）
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
class Student{
    private:
        int norm, ex, final;//分别表示学生的平时成绩、实验成绩、期末考试和总评成绩 
        char name[15];//学生姓名
    public:
        int overall;
        void init(char *name1, int nor1, int ex1, int fin1); //用参数name1,nor1,exp1,fin1分别初始化数据成员name，norm, ex, final
        void print();
        friend void sort(Student st[], int n);
};
void Student::init(char *name1, int nor1, int ex1, int fin1){
    strcpy(name,name1);
    norm = nor1;
    ex = ex1;
    final = fin1;
    overall =  round(norm * 0.2 + ex * 0.25 + final * 0.55 );
    if(final < 50) overall = fin1;
}
void Student::print(){
    cout << name<<" " << norm<< " " << ex << " " << final << " " << overall << endl;
}
bool cmp(Student a, Student b){
    return a.overall > b.overall;
}
void Sort(Student s[],int n){
    sort(s,s + n,cmp);
}
int main(){ 
    int n, i;
    int norm, ex, final;
    char name[15];
    cin>>n;
    Student stu[n];
    for( i = 0; i < n; i++ ){
        cin>>name>>norm>>ex>>final;   
        stu[i].init(name,norm,ex,final);   
    }
    Sort(stu, 5); 
    for(i = 0;i < n; i ++){   
        stu[i].print();  
    } 
    return 0;
}