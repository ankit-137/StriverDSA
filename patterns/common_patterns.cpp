#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    // for(int i=1;i<=n;i++){
    //     for (int j = 1; j <=i; j++) {
    //         cout<<i;
    //     }
    //     cout << endl;
        
    // }   

    // for (int i = 1;i<=n;i++) {
    //     for (int j = i; j<=n; j++) {
    //         cout << j;
    //     }
    //     cout <<endl;
    // }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <=n-i; j++) {
    //         cout<<" ";
    //     }

    //     for (int j =1; j <= 2*i-1; j++) {
    //        cout<<"*";
    //     }
    //     cout <<endl;
    // }

    // for (int i = n; i >= 1; i--) {
    //     // Leading space: n - i spaces
    //     for (int j = 1; j <= n - i; j++) {
    //         cout << " ";
    //     }
    //     // Stars: 2 * i - 1 stars
    //     for (int j = 1; j <= 2 * i - 1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*flag is bit changing var:: not RAT looping :: print flag and flip on same row itr :: on end of every 
    row itr set it 1 if even row is done and 0 if odd is done */

//     int flag=1;
//     for (int i = 1; i <=n; i++) {
//         for (int j = 1; j<=i; j++) {
//             //  flag=(!flag);
//             cout << flag <<" ";  
//             flag=(!flag);
//         }
//          if(i%2==0){flag=1;}else flag=0;
//         cout <<endl;
//     }

/*1 outer loop for row iteration :: 1 var spc for storing number of spaces :; 
loop1 prints left triangle for 1 to i :: then loop2 prints spaces from 0 to spc+i times
loop3 prints right triangle for i to 1 (reverse)*/
    // for (int i = 1; i <=n; i++) {
    //     int spc = n-2*i;
    //     for (int j = 1; j <=i; j++) {
    //         cout <<j;
    //     }   
    //     for (int k = 0; k <= spc+i; k++) {
    //         cout <<"  ";    
    //     }
    //     for (int j = i; j>=1; j--) {
    //          cout <<j;
    //     }
    //     cout <<endl;
    // }

    /* take 1 var to store current number*/
// int itr=1;
//     for (int i = 1; i<=n; i++) {
//         for (int j =1; j<=i; j++) {
//             cout <<itr<<" ";
//             itr++;
//         }    
//         cout <<endl;
//     }

/*2 ways to type cast */
    // for(int i=1;i<=n;i++){
    //     for (int j = 0; j <i; j++) {
    //         // char k=char(j+64);
    //         cout<< char('A'+j);
    //     }
    //     cout << endl; 
    // }   


/* multiple ways but 2 failed and 1 sucess*/
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <=n-i; j++) {
//             cout<<" ";
//         }
// char ch='A';
// int breakpoint = (2 * i + 1) / 2;
//         // for (int j = 1; j <= 2*i-1; j++) {
//         //     cout << ch; 
//         //     if(j<=(2*i+1)/2) ch++;
//         //     else ch--;
//         // }
//          for (int j = 1; j <=2 * i + 1; j++) {
//             cout << ch;

//             // Increment character till the midpoint, then decrement
//             if (j <= breakpoint) ch++;
//             else ch--;
//         }

    
        return 0;
    }
    
    