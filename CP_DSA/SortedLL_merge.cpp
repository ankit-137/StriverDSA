#include<bits/stdc++.h>
using namespace std;
// 2.1 Combining the Sorted Registries
// Two departments each maintain a sorted linked list of employee ID records. For an
// upcoming audit, the two registries must be combined into a single sorted linked list by
// splicing together the existing nodes, preserving the sorted order throughout.
// Input: Heads of two sorted linked lists, list1 and list2.
// Output: Head of the merged sorted linked list.
// Example 1: Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2: Input: list1 = [], list2 = []
// Output: []
struct node{
    int val;
    node* next;
    public :
    node(int val,node* next){
        this->val =val;
        this->next=next;
    }
};
class ll{
public:
    node* head=nullptr;

    void push_back(int val, node* next = nullptr){
        node* nn = new node(val, next);
        if (head == nullptr) {
            head = nn;
        } else {
            node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = nn;
        }
    }
    void dlt(){
        if (head == nullptr) {
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
    void display(){
        node* temp=head;
        while(temp!=nullptr){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    node* merge(node* h1,node* h2){
    
    }
};


int main(){
    ll l1;
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);
    l1.display();
    ll l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(4);

    ll l3;
    l3.merge(l1,l2);


    return 0;
}