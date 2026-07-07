#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=36;
    set<int> divs;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divs.insert(i);
            divs.insert(n/i);
        }
    }
    for(int i : divs){
        cout<<i<<" ";
    }
    return 0;
}