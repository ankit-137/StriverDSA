#include<bits/stdc++.h>
using namespace std;

// We know that extracting digits of a number can be done by repeatedly taking modulo 10 and dividing by 10. Now, instead of just extracting digits, if we build a new number by appending these digits in reverse order, we effectively reverse the number. Each new digit becomes the least significant digit of the reversed number by multiplying the current reversed value by 10 before adding the digit.
// Initialize a variable to store the reversed number as 0.
// Loop while the original number is greater than 0.
// Extract the last digit by performing modulo 10.
// Multiply the reversed number by 10 and add the extracted digit.
// Remove the last digit from the original number using integer division by 10.
// Continue this process until the original number becomes 0.
// Return the reversed number.
int better(){
     int n = 1010, temp = 0;

while (n != 0) {
    temp = temp * 10 + (n % 10);
    n /= 10;
} 
//another approach
//    int ld = n % 10; // Extract the last digit of the number
//         revNum = (revNum * 10) + ld; // Build the reverse number by appending the last digit
//         n = n / 10; // Remove the last digit from the original number
return temp;
}
int myWay(){
    int n=10100,temp=0;
    int ct=(int)log10(n)+1;

    while(n!=0){
    temp+=(n%10)*pow(10,ct);
    ct--;
    n/=10;
    } 
    return temp;
}
int main(){
    
    //myWay
    cout << myWay()<<endl;
    //better way
    cout <<better();
    return 0;
}