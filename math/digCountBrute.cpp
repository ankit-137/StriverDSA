#include<bits/stdc++.h>
using namespace std;
/* Given an integer N, return the number of digits in N.*/
/*TC is O(log N+1) where N is inputNumber */
int main(){
    int n=1054;
    if(n==0) {}
    else {
int ct=0;
while(n!=0){
    // temp%=10; --we not need ot print all individual number . just count so not update the var
    ct++;
    n/=10;
}
cout <<ct;
}

    return 0;
}