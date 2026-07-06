#include<bits/stdc++.h>
using namespace std;
int better(int n){
     int temp = 0;

while (n != 0) {
    temp = temp * 10 + (n % 10);
    n /= 10;
} 
return temp;
}
int main(){
    int n = 4554;
    int rev=better(n);
    if(rev==n){cout<<"palindrome";}
    else cout << "not palindrome";
    return 0;
}