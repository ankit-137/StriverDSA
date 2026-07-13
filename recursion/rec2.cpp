#include<bits/stdc++.h>
using namespace std;
void printName(string nm,int n,int ct=0){
    if(ct==n){return;}
    {cout<<nm<<endl;
    printName(nm,n,ct+1);}
}
int main(){
    string nm="nit";
    int n=5;
    printName(nm,n);
    return 0;
}