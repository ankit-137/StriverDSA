#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int val;
    node* next;
    node(int val,node* next=nullptr){
        this->val=val;
        this->next=nullptr;
    }
};


class ll{
    private:
    node* head=nullptr;
    public:
    void insert(int val,node* n=nullptr){
        node* nn = new node(val);
        if(head==nullptr) head = nn;
        else  {
            nn->next=head;
            head=nn;
        }

    }
    void print(){
        node* t=head;
        while(t!=nullptr){
            
            cout << t->val<<" ";
            t=t->next;
        }

    }
    void reverse(){
        node* c=head;
        node* p=nullptr;
        while(c){
            node* n=c->next;
            c=p;
            p=c;
            c=n;
        }
    }

};
int main(){
    ll l=ll();
    l.insert(12);
    l.insert(1);
l.insert(0);
l.insert(0); l.insert(1); l.insert(12);  
l.print();
l.reverse();
l.print();

return 0;
}