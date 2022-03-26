#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 11;
template<class ElemType>
class sqlist{
    ElemType *p;
    int len;
    public:
        sqlist(){
            p = new ElemType[N];
            len = 0;
        }
        void init(ElemType x){
            while(cin >> x){
                p[++len] = x;
            }
        }
        void output(){
            for(int i = 1; i <= len; i++){
                cout << p[i] ;
                if(i == len){
                    cout << "\n";
                }else{
                    cout << ',';
                }
            }
        }
        void Unique(){
            //cout << 1 << endl;
            int cnt = 0;
            ElemType *a = new ElemType [1000];
            for(int i = 1; i <= len; i++){
                int f = 0;
                for(int k = 1; k < i; k++){
                    if(p[k] == p[i]){
                        f = 1;
                        break;
                    }
                }
                if(f == 1){
                    continue;
                }else{
                    a[++cnt] = p[i];
                }
            }
            len = cnt;
            for(int i = 1; i <= cnt; i++){
                p[i] = a[i];
            }    
            delete []a;
        }
        ~sqlist(){
            delete []p;
        }
};
int main(){
    int op;
    cin >> op;
    if(op == 0){
        sqlist<int> list;
        int x;
        list.init(x);
        list.output(); 
        cout << endl;
        list.Unique();
        list.output();
    }
    else if (op == 1){
        sqlist<double> list;
        double x;
        list.init(x);
        list.output();
        cout << endl;
        list.Unique();
        list.output();
    }
    else if (op == 2){
        sqlist<char> list;
        char s;
        list.init(s);
        list.output();
        cout << endl;
        list.Unique();
        list.output();
    }
    else if (op == 3){
        sqlist<string> list;
        string s;
        list.init(s);
        list.output();
        cout << endl;
        list.Unique();
        list.output();
    }
    else if(op < 0 || op > 3){
        cout << "err" << endl;
    }
    return 0;
}