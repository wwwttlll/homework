#include<bits/stdc++.h>
using namespace std;
template<class ElemType>
void Union_Sq( vector<ElemType> &a, vector<ElemType> &b ){
    for(int i = 0; i < b.size(); i++){
        int f = 0;
        for(int j = 0; j < a.size(); j++){
            if(a[j] == b[i]){
                f = 1;
                break;
            }
        }
        if(f == 0){
            a.push_back(b[i]);
        }
    }
}
template<class ElemType>
void output(vector<ElemType> &a){
    for(int i = 0; i < a.size(); i++){
        cout << a[i];
        if(i == a.size() - 1)cout << '\n';
        else cout << ",";
    }
}
template<class ElemType>
void read(vector<ElemType> &a){
    ElemType x;
    char c;
    int cnt = 0;
    while(cin >> x){
        a.push_back(x);
        c = getchar();
        if(c == '\n')break;
    }
}
int main(){
    int op;
    cin >> op;
    //0：int；1：double；2：char；3：string；其余值：输出err
    if(op == 0){
        vector<int>a;
        vector<int>b;
        read(a);
        read(b);
        output(a);
        output(b);
        Union_Sq(a,b);
        cout << endl;
        output(a);
    }
    else if(op == 1){
        vector<double>a;
        vector<double>b;
        read(a);
        read(b);
        output(a);
        output(b);
        Union_Sq(a,b);
        cout << endl;
        output(a);
    }
    else if(op == 2){
        vector<char>a;
        vector<char>b;
        read(a);
        read(b);
        output(a);
        output(b);
        Union_Sq(a,b);
        cout << endl;
        output(a);
    }
    else if(op == 3){
        vector<string>a;
        vector<string>b;
        read(a);
        read(b);
        output(a);
        output(b);
        Union_Sq(a,b);
        cout << endl;
        output(a);
    }
    else{
        cout << "err" << endl;;
    }
    return 0;
}