#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
#define esp 1e-9
const int N = 1e5 + 11;
double up[N],down[N];
int n,m;
int read(double x[]){
    int a;
    string s;
    getline(cin,s);
    stringstream str(s);
    int cnt = 0;
    while(str >> a){
        x[++cnt] = a;
    }
    return cnt;
}
struct node{
    double x,y;
    node * next;
};
node *create(double x[],double y[],int sz){
    node * head = new node;
    node *tail = head;
    for(int i = 1; i <= sz; i++){
        node *p = new node;
        p->x = x[i];
        p->y = y[i];
        tail ->next = p;
        tail = p;
    }
    tail -> next = NULL;
    return head;
}
node *head1,*head2,*head3;
void merge(int op){//0：加法  1：减法）
    node*p = head1->next;
    node*q = head2->next;
    head3 = new node;
    node* tail = head3;
    while(p ->next != NULL && q -> next != NULL){
        if(p->x == q->x){
            double sum;
            if(op == 0)sum = p->y + q->y;
            else sum = p->y - q->y;
            if(fabs(sum) > esp){
                node *t = new node;
                t->y = sum;
                t->x = p->x;
                tail->next = t;
                tail = t;
            }
            p = p -> next;
            q = q -> next;
        }
        else if(p->x < q->x){
            node *t = new node;
            t->y = p->y;;
            t->x = p->x;
            tail->next = t;
            tail = t;
        }else{
            node *t = new node;
            t->y = q->y;;
            t->x = q->x;
            tail->next = t;
            tail = t;
        }
    }
    while(p->next != NULL){
        node *t = new node;
        t->y = p->y;;
        t->x = p->x;
        tail->next = t;
        tail = t;
    }
    while(q->next != NULL){
        node *t = new node;
        if(op == 0)t->y = q->y;
        else t->y = -(q->y);
        t->x = q->x;
        tail->next = t;
        tail = t;
    }
    tail->next = NULL;
}
void output(node*head){
    node *p = head->next;
    if(p == NULL)return;
    if(p->y == -1)
        cout << '-';
    else{
        if(p->y != 1)cout << p->y;
    }
    if(p->x != 0){
        if(p->x == 1)cout<< 'x';
        else cout << "x^" << p->x;
    }
    while(p->next != NULL){
        p = p->next;
        if((p->y) > 0){
            cout<<'+';
            if(p->y != 1){
                cout << p->y;
            }
        }
        else if((p->y) < 0){
            if(p->y == -1)cout <<'-';
            else cout << ((p->y));
        }
        else continue;
        if(p->x != 0){
            if(p->x == 1)cout<< 'x';
            else cout << "x^" << p->x;
        }
    }
}
int main(){
    int op = 0;
    cin >> op;
    getchar();
    n = read(down);
    n = read(up);
    head1 = create(up,down,n);
    //output(head1);
    m = read(down);
    m = read(up);
    head2 = create(up,down,m);
    merge(op);
    output(head3);
    return 0;
}