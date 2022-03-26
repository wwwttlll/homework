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
    void reverse(){
        node<t> *p = tail->pre;
        tail->pre = head;
        head->next = tail;
        while(p -> pre != head){
            insert(p->data);
            p = p -> pre;
            delete p->next;
        }
        insert(p->data);
        delete p;
    }
    ~list(){
        node<t> *p = head;
        while(p->next != NULL){
            p = p->next;
            delete p->pre;
        }
    }
};
int main(){
    int op;
    cin >> op;
    getchar();
    if(op == 0){
        list<int> l1;
        int s;
        l1.init(s);
        l1.output();
        cout << endl;cout << endl;
        l1.reverse();
        l1.output();
    }
    else if (op == 1){
        list<double> l1;
        double s;
        l1.init(s);
        l1.output();
        cout << endl;cout << endl;
        l1.reverse();
        l1.output();
    }
    else if (op == 2){
        list<char> l1;
        char s;
        l1.init(s);
        l1.output();
        cout << endl;cout << endl;
        l1.reverse();
        l1.output();
    }
    else if (op == 3){
        list<string> l1;
        string s;
        l1.init(s);
        l1.output();
        cout << endl;cout << endl;
        l1.reverse();
        l1.output();
    }
    else if(op < 0 || op > 3){
        cout << "err" << endl;
    }
    return 0;
}