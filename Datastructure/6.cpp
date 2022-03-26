#include<iostream>
#include<sstream>
using namespace std;
template<class t>
struct node{
    t data;
    node<t> *next,*pre;
};
template <class t>
class list{
    node<t> *head;
    node<t> *tail;
    public:
    list(){
        head = new node<t>;
        tail = new node<t>;
        head ->next = tail;
        tail -> next = NULL;
        tail -> pre = head;
    }
    void init(t x){
        string str;//定义字符串
        getline(cin,str);//读入一行进字符串中
        stringstream st(str);//将读入的数字取出
        while(st>>x){
            insert(x);//将取出的数存入数组
        }
    }
    void output(){
        node<t> *p = head;
        while(p->next->next != NULL){
            p = p->next;
            cout << p->data ;
            if(p->next ->next == NULL){
                break;
            }else {
                cout << "->";
            }
        }
    }
    void insert(t x){
        node<t> *p = new node<t>;
        p->data = x;
        p -> next = tail;
        p -> pre = tail -> pre;
        tail -> pre -> next = p;
        tail -> pre = p;
    }
    void exchange(int n){
        int cnt = 0;
        node<t> *p = head;
        while(cnt != n){
            cnt++;
            p = p->next;
        }
        tail -> pre -> next = head -> next;
        head -> next -> pre = tail -> pre;
        head -> next = p -> next;
        p -> next -> pre = head;
        p -> next = tail;
        tail -> pre = p;
    }
    template <class type>
    friend void U(list<type> &l1,list<type> &l2);
    ~list(){
        node<t> *p = head;
        while(p->next != NULL){
            p = p->next;
            delete p->pre;
        }
    }
};
template <class type>
void U(list<type> &l1,list<type> &l2){
    node<type>*p = l2.head;
    while(p->next->next != NULL){
        p = p->next;
        l1.insert(p->data);
    }
}
int main(){
    int op;
    cin >> op;
    getchar();
    if(op == 0){
        list<int> l1;
        int s;
        l1.init(s);
        list<int> l2;
        l2.init(s);
        l1.output();
        cout << endl;
        l2.output();
        cout << "\n" << endl;
        U(l1,l2);
        l1.output();
    }
    else if (op == 1){
        list<double> l1;
        double s;
        l1.init(s);
        list<double> l2;
        l2.init(s);
        l1.output();cout << endl;
        l2.output();cout << "\n" << endl;
        U(l1,l2);
        l1.output();
    }
    else if (op == 2){
        list<char> l1;
        char s;
        l1.init(s);
        list<char> l2;
        l2.init(s);
        l1.output();cout << endl;
        l2.output();cout << "\n" << endl;
        U(l1,l2);
        l1.output();
    }
    else if (op == 3){
        list<string> l1;
        string s;
        l1.init(s);
        list<string> l2;
        l2.init(s);
        l1.output();cout << endl;
        l2.output();cout << "\n" << endl;
        U(l1,l2);
        l1.output();
    }
    else if(op < 0 || op > 3){
        cout << "err" << endl;
    }
    return 0;
}