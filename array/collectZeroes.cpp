#include<bits/stdc++.h>
using namespace std;
void sendBack(vector<int> &arr){
    int s=0;
    for(int f=0; f<arr.size(); f++){
        if(arr[f]!=0){
            swap(arr[s], arr[f]);
            s++;
        }
    }
}
int main(){
    vector<int> arr={2,0,3,3,0,1};
    sendBack(arr);
    for(int i : arr){
        cout <<i<<" ";
    }
    return 0;
}