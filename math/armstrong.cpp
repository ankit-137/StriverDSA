#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =371;
    int temp=n;
    int l=log10(n)+1;
 long int sum=0;
    while(n!=0){
        sum+=pow(n%10,l);
        n/=10;
        cout <<sum<<" ";
    }   
    if (sum==temp){cout <<"arms";}
    else cout <<"no";
    return 0;
}