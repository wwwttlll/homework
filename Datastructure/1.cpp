#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int op;
const int MAXN = 1e5 + 11;
template<class ElemType>
class sqlist{
    private:
        ElemType *a;
        int length;
    public:
        sqlist(){
            length = 0;
            a = new ElemType[MAXN];
        }
        void init(){
            char c = ' ';
            while(c != '\n'){
                cin >> a[++length];
                c = getchar();
            }
        }
        void exchange(int &n){
            ElemType *p = new ElemType[MAXN];
            for(int i = 1; i <= n; i++){
                p[i] = a[i];
            }
            for(int i = 1; i <= length - n; i++){
                a[i] = a[i + n];
            }
            int cnt = 0;
            for(int i = length - n + 1; i <= length; i++){
                a[i] = p[++cnt];
            }
        }
        void output(){
            for(int i = 1; i <= length; i++){
                cout << a[i] ;
                if(i == length){
                    cout << "\n";
                }else{
                    cout << ',';
                }
            }
        }
        ~sqlist(){
            //delete []a;
        }
};
int main(){
    cin >> op;
    if(op == 0){
        sqlist<int> list;
        list.init();
        int n;
        cin >> n;
        list.output();
        cout << endl;
        list.exchange(n);
        list.output();
    }
    else if (op == 1){
        sqlist<double> list;
        list.init();
        int n;
        cin >> n;
        list.output();
        cout << endl;
        list.exchange(n);
        list.output();
    }
    else if (op == 2){
        sqlist<char> list;
        list.init();
        int n;
        cin >> n;
        list.output();
        cout << endl;
        list.exchange(n);
        list.output();
    }
    else if (op == 3){
        sqlist<string> list;
        list.init();
        int n;
        cin >> n;
        list.output();
        cout << endl;
        list.exchange(n);
        list.output();
    }
    else if(op < 0 || op > 3){
        cout << "err" << endl;
    }
    return 0;
}