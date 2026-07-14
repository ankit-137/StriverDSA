#include<bits/stdc++.h>
using namespace std;
/*recursive approach*/
void revArr(vector<int>& arr,int s,int f){
    if(s>=f){return;}
    swap(arr[s],arr[f]);
    revArr(arr,s+1,f-1);
}
int main(){
    vector<int> arr={1,2,3,5,5};
    int s=0,f=arr.size()-1;
    /*normal iterative approach*/
    // while(s!=f){
    //     swap(arr[s],arr[f]);
    //     s++;
    //     f--;
    // }
    revArr(arr,s,f);
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}       