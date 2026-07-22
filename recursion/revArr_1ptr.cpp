#include<bits/stdc++.h>
using namespace std;
/*recursive approach*/

int main(){
    vector<int> arr={1,4,7,2,8,9,10,12};
    int n=arr.size();
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[i+n-1-2*i]);
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}       