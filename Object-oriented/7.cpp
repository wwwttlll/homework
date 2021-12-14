#include <bits/stdc++.h>
using namespace std;
//查找学生
class Student{
    int number;
    string name;
    double c, m, ave;
    public:
    Student(int n = 0,string s=""):number(n),name(s){}
    string GetName(){
        return name;
    }
    int GetNum(){
        return number;
    }
    double GetC(){
        return c;
    }
    double GetM(){
        return m;
    }
    double GetA(){
        return ave;
    }
    bool judgeC(double c){
        if(c > 100 || c < 0)return false;
        else return true;
    }
    void setChinese(double c){
        if(judgeC(c))
            this -> c = c; 
        else{
            this -> c = 0; 
        }
    }
    bool judgeM(double c){
        if(c > 100 || c < 0)return false;
        else return true;
    }
    void setMath(double m){
        if(judgeM(m))this -> m = m;
        else this -> m = m;
    }
    void CalAve(){
        ave = (c + m) / 2.0;
    }
};
void FindStudent(Student *s,int n,string nm){
    int f = 0;
    for(int i = 0; i < n; i++){
        string ss = s[i].GetName();
        
        if(ss.find(nm) != ss.npos){
            f = 1;
            cout << s[i].GetNum() <<" "<< s[i].GetName()<<" " << s[i].GetC()<<" " << s[i].GetM()<<" " ;
            cout << s[i].GetA() << endl;      
        }
        
    }if(f == 0){
        puts("Not found.");
    }
}
int main(){
    int n, i;
    int number;
    string name, searchName;
    double math, chinese;
    cin >> n;
    Student stu[n];
    for (i = 0; i < n; i++){
        cin >> number >> name >> chinese >> math;
        stu[i] = Student(number, name);
        stu[i].setChinese(chinese);
        stu[i].setMath(math);
        stu[i].CalAve();
    }
    cin >> searchName; //输入需要查找的姓名
    FindStudent(stu, n, searchName); //调用函数，查找学生，输出信息
    return 0;
}
