#include <bits/stdc++.h>
using namespace std;
    // Recursive function to print numbers from current down to 1 using backtracking
    void printNumbers(int current) {
        // Base case: if current is less than 1, stop recursion
        if (current < 1)
            return;

    /*only change the calling line's position , it will become backtracing instead of 
    forward recusion*/
cout << current << " ";
        // Recursive call with previous number
        printNumbers(current - 1);

        // Print current number during backtracking
        
    }


int main() {
    
    int n = 10;

    printNumbers(n);
    cout << "\n";

    return 0;
}


/*
    
*/