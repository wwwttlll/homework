#include<iostream>
#include<sstream>
#include<map>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}

template<class Elemtype>
struct node{
    Elemtype data;
    node<Elemtype> *next,*pre;
};
template<class Elemtype>
class List{
    node<Elemtype> *head;
    node<Elemtype> *tail;
    public:
    List(){
        head = new node<Elemtype>;
        tail = new node<Elemtype>;
        head ->next = tail;
        tail -> next = NULL;
        tail -> pre = head;
    }
    void init(Elemtype x){
        string s;
        getline(cin,s);
        stringstream str(s);
        while(str >> x){
            insert(x);
        }
    }
    void insert(Elemtype x){
        node<Elemtype> *p = new node<Elemtype>;
        p->data = x;
        tail->pre->next = p;
        p->pre = tail->pre;
        tail->pre = p;
        p->next = tail;
    }
    void output(){
        node<Elemtype> *p = head->next;
        while(p->next != NULL){
            cout << p->data;
            if(p -> next -> next == NULL){
                break;
            }else{
                cout << "->";
            }
            p = p->next;
        }
    }
    template<class t>
    friend void merge(List<t> &l1,List<t> &l2,List<t> &l3);
    ~List(){
        node<Elemtype> *p = head;
        while(p->next != NULL){
            p = p->next;
            delete p->pre;
        }
        delete p;
    }
};
template<class Elemtype>
void merge(List<Elemtype> &l1,List<Elemtype> &l2,List<Elemtype> &l3){
    map<Elemtype,int>mp;
    node<Elemtype>*p = l1.head->next;
    node<Elemtype>*q = l2.head->next;
    while(p->next != NULL && q->next != NULL){
        if(mp.count(p->data))p = p->next;
        else if(mp.count(q->data))q = q->next;
        else if(p->data < q->data){
            mp[p->data] = 1;
            l3.insert(p->data);
            p=p->next;
        }
        else{
            mp[q->data] = 1;
            l3.insert(q->data);
            q = q->next;
        }
    }
    while(q->next != NULL){
        if(mp[q->data])q = q->next;
        else {
            l3.insert(q->data);
            mp[q->data] = 1;
            q = q->next;
        }
    }
    while(p->next != NULL){
        if(mp[p->data])p = p->next;
        else {
            l3.insert(p->data);
            mp[p->data] = 1;
            p = p->next;
        }
    }
}
int main(){
     int op;
    cin >> op;
    getchar();
    if(op == 0){
        List<int> l1;
        int s;
        l1.init(s);
        List<int> l2;
        l2.init(s);
        List<int> l3;
        l1.output();cout << endl;
        //return 0;
        l2.output();cout << "\n" << endl;
        merge(l1,l2,l3);
        l3.output();
    }
    else if (op == 1){
        List<double> l1;
        double s;
        l1.init(s);
        List<double> l2;
        l2.init(s);
        List<double> l3;
        l1.output();cout << endl;
        l2.output();cout << "\n" << endl;
        merge(l1,l2,l3);
        l3.output();
    }
    else if (op == 2){
        List<char> l1;
        char s;
        l1.init(s);
        List<char> l2;
        l2.init(s);
        List<char> l3;
        l1.output();cout << endl;
        l2.output();cout << "\n" << endl;
        merge(l1,l2,l3);
        l3.output();
    }
    else if (op == 3){
        List<string> l1;
        string s;
        l1.init(s);
        List<string> l2;
        l2.init(s);
        List<string> l3;
        l1.output();cout << endl;
        l2.output();cout << "\n" << endl;
        merge(l1,l2,l3);
        l3.output();
    }
    else if(op < 0 || op > 3){
        cout << "err" << endl;
    }
    return 0;
}