#include<bits/stdc++.h>
using namespace std;
/*refPass : void get_factors(set<int>& my_set) |||  ptrpass : void get_factors(set<int>* my_set)  */
void factorit(set<int> &mset,int n){
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            int div=n/i; 
            mset.insert({i,div});
        }     
    }
}
int main(){
    set<int> factors;
    int n=20;
    factorit(factors,n);
    set<int> fact15;
    factorit(fact15,15);
    
    factors.insert(fact15.begin(), fact15.end());
for(int i :fact15){
        cout <<i<<",";
    }
    return 0;
}