#include<bits/stdc++.h>
using namespace std;
//寻找最好成绩
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
class Student{
    private:
    int num;  //学号
    float score; //分数
    public:  //成员仅给出原型，需自行设计
    Student(int num = 0){
        this -> num = num;
    }
    void SetScore(float s){
        score = s;
    }
    int GetNum(){
        return num;
    }
    float GetScore(){
        return score;
    }
};
int cnt[10000];
int c = 0;
void Max(Student *a,int n){
    float maxn = 0;
    for(int i = 0; i < n; i++){
        maxn = max(maxn,a[i].GetScore());
    }
    //cout << maxn << endl;
    for(int i = 0; i < n; i++){
        if(a[i].GetScore() == maxn){
            //cout << i << endl;
            cnt[++c] = i;
        }
    }
}
int main(){
   int i, n, num;
   float score;
   cin>>n;
   Student stu[n];
   for( i = 0; i < n; i++){
        cin>>num>>score;
        stu[i] = Student(num);
        stu[i].SetScore(score);
    }
    Max(stu, n );
    for(int i = 1; i <= c; i++){
        cout << stu[cnt[i]].GetNum() << " " << stu[cnt[i]].GetScore() << endl;
    }
    return 0;
}