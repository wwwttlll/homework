#include<iostream>
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
        char c = ' ';
        while(c != '\n'){
            cin >> x;
            //cout << x << endl;
            insert(x);
            c = getchar();
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
    if(op == 0){
        list<int> l;
        int x;
        l.init(x);
        int n;
        cin >> n;
        l.output(); 
        cout << endl;cout << endl;
        l.exchange(n);
        l.output();
    }
    else if (op == 1){
        list<double> l;
        double x;
        l.init(x);
        int n;
        cin >> n;
        l.output(); 
        cout << endl;cout << endl;
        l.exchange(n);
        l.output();
    }
    else if (op == 2){
        list<char> l;
        char s;
        l.init(s);
        int n;
        cin >> n;
        l.output(); 
        cout << endl;cout << endl;
        l.exchange(n);
        l.output();
    }
    else if (op == 3){
        list<string> l;
        string s;
        l.init(s);
        int n;
        cin >> n;
        l.output(); 
        cout << endl;cout << endl;
        l.exchange(n);
        l.output();
    }
    else if(op < 0 || op > 3){
        cout << "err" << endl;
    }
    return 0;
}