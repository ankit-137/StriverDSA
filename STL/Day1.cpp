#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s = {5, 2, 4, 6, 5};
    /*insert({1,2,45,6,5}),count(),begin(),end(),clear(),empty(),clear(),size(),erase() */
    // for (int x : s) {
    //     cout << x << " ";
    // }
    // for (auto i = s.begin(); i != s.end(); i++) {
    //     cout << *i;
    // }
     
    set<int> st = {6, 5, 7, 94, 2, 2}; // Elements will be sorted: 2, 5, 6, 7, 94
    auto it = st.find(7);
    if (it != st.end()) {
        // Calculate the "index" (distance from the beginning)
        int index = distance(st.begin(), it);
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}