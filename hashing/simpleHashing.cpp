#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s = "leetcode";

    // 1. Declaration: map<Key_Type, Value_Type>
    unordered_map<char, int> mpp;

    // 2. Precomputation (Insertion & Update)
    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++; // Direct key thi frequency count thashe
    }

    // 3. Retrieval / Access
    cout << "Frequency of 'e': " << mpp['e'] << endl; // Output: 3
    cout << "Frequency of 't': " << mpp['t'] << endl; // Output: 1

    // 4. Checking if a key exists
    if (mpp.find('z') != mpp.end()) {
        cout << "'z' exists in map" << endl;
    } else {
        cout << "'z' does not exist in map" << endl;
    }

    // 5. Iterating through the map
    cout << "\nAll Key-Value pairs:" << endl;
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl; 
        // it.first = Key, it.second = Value
    }

    return 0;
}