#include <bits/stdc++.h>
using namespace std;
//学生成绩转换（友元函数）
class Student{
    public:
        void Set_StuNum(int n){
            stu_num = n;
        }
        int Get_StudNum(){
            return stu_num;
        }   
        void Set_Score(float n){
            score = n;
        }
        float Get_Score(){
            return score;
        } 
        friend void Score_Trans(Student &s);
    private:
        int stu_num; //学号
        float score; //分数
};
void Score_Trans(Student &ss){
    //大于等于90：优；80~90：良；70~79：中；60~69：及格；小于60：不及格。
    double s = ss.Get_Score();
    int num = ss.Get_StudNum();
    if(s >= 90){
        cout << num << " 优";
    }
    else if(s < 90 && s >= 80){
        cout << num << " 良";
    }
    else if(s < 80  && s >= 70){
        cout << num << " 中";
    }
    else if(s < 70  && s >= 60){
        cout << num << " 及格";
    }
    else if(s < 60){
        cout << num << " 不及格";
    }
}
int main(){ 
    int n, i, stu_num, max_stu_num;
    float score, max_score;
    cin>>n;
    Student stu[n];
    for( i = 0; i < n; i++ ){
        cin>>stu_num>>score; 
        stu[i].Set_StuNum(stu_num);
        stu[i].Set_Score(score);
    }
    for( i = 0; i < n; i++ ){
        Score_Trans(stu[i]);
        if(i < n - 1) cout<<endl;
    }
    return 0;
}