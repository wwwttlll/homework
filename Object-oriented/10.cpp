#include<bits/stdc++.h>
using namespace std;
//对象数组和对象指针
class Student{ 
    public:
    void Set_StuNum(int n){
        stu_num = n;
    } //自行设计
    int Get_StudNum(){
        return stu_num;
    }  //自行设计
    void Set_Score(float s){
        score = s;
    } //自行设计
    float Get_Score(){
        return score;
    }  //自行设计
    private:   
    int stu_num; //学号
    float score; //分数   
};
void max(Student *stu, int n, int &num, float &maxn){
    for(int i = 0; i < n; i++){
        maxn = max((stu + i) -> Get_Score(), maxn);
    }
    for(int i = 0; i < n; i++){
        if(maxn == (stu + i) -> Get_Score()){
            num = (stu + i) -> Get_StudNum();
        }
    }
}
int main(){ 
    int n, stu_num, max_stu_num;
    float score = 0, max_score = 0;
    cin>>n;
    Student stu[n];
    for( int i = 0; i < n; i++ ){
        cin>>stu_num>>score; 
        stu[i].Set_StuNum(stu_num);
        stu[i].Set_Score(score);
    }
    max(stu, n, max_stu_num, max_score);
    cout<<max_stu_num<<" "<<max_score;  
    return 0;
}