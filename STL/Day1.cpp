#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Containers 

/*Arraays ,Vectors,queue,stack,MaxPriQue,MinPriQue,Dequeue,lists
set,UnordSet,MultiSet,UnOrdMultiSet  Map,MultiMap,UnOrdMultiMap pairs*/

//Common shared Functions
/*push,push_back,push_front :: pop,pop_back,pop_front :: insert[(itr,{val}),(itr1,itr2,{val}|container),(itr,times,val),(itr,it1,it2)] 
emplace,emplace_front(),emplace_back()   top()-back() front()-back() 
begin()-end() rbegin()-rend() cbegin()-cend() 
size() empty() v2.swap(v1) find(val)-returns iterator with val)position if not in container then .end()*/

//algorithmic functions 
/* sort(.begin(),.end(),comparator())-comparator is customized bool_function for sorting ,if in decreasing_order use greater<i>
max_element()-min_element() :: next_permutation(itr1,itr2) :: __builtin_popcount()

*/

int main(){
    unordered_set<int> s = {5, 2, 4, 6, 5};
    // vector<int> v={1, 2, 3};
    // sort(v.begin(), v.end()); // Step 1: Sort the vector to get all permutations
    // do {
    //     for(int x : v){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // } while(next_permutation(v.begin(), v.end())); // Step 2: Loop while a next permutation exists

     
    // set<int> st = {6, 5, 7, 94, 2, 2}; // Elements will be sorted: 2, 5, 6, 7, 94
    
    // list<pair<string,string>> li;
    // li.push_back({"ankit","patel"}); // Fixed push -> push_back
    // for(auto i : li){ // Fixed range loop syntax
    //     cout << i.first << " " << i.second << endl; // Fixed pair printing
    // }


    // queue<int> q;
    // q.push(4);
    // q.push(5);
    // q.push(1);
    // cout <<q.back();
    // To sort a queue, we copy its elements to a container like vector, sort it, and push them back.
    // vector<int> temp;
    // while(!q.empty()){
    //     temp.push_back(q.front());
    //     q.pop();
    // }

    // sort(temp.begin(), temp.end());

    // for(int i : temp){
    //     q.push(i);
    // }


    // while(!q.empty()){
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    // list<int> num;
    // num.insert(num.begin(), {5, 5, 6, 5, 5});

    // num.emplace_front(7);
    // num.emplace_back(10);

    // for(int i : num){
    //     cout << i << endl;
    // }

    return 0;
}