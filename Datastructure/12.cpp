#include<iostream>
#include<cstdio>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
int n,m;
struct node{
    int data;
    node* next;
};
class Queue{
    node* head;
    node* rear;
    int sz;
    public:
    Queue(){
        head = new node;
        rear = head;
        sz = 0;
    };
    void push(int n){
        node *p = new node;
        p->data = n;
        p->next = NULL;
        rear->next = p;
        rear = p;
        sz++;
    }
    int top(){
        return head->next->data;
    }
    void pop(){
        node *p = head->next;
        head->next = head->next->next;
        if(rear == p)rear = head;
        delete p;
        sz--;
    }
    int size(){
        return sz;
    }
};
int main(){
    cin >> n >> m ;
    Queue q;
    for(int i = 1; i <= n; i++){
        q.push(i);
        //cout << q.top() << endl;
    }
    int cnt = 0;
    int ans = 0;
    while(q.size() != 1){
        int x = q.top();
        q.pop();
        //cout << x << endl;
        cnt++;
        if(cnt == m){
            cnt = 0;
            continue;
        }else{
            q.push(x);
        }
    }
    ans = q.top();
    cout << ans <<" ";
    return 0;
}