#include<bits/stdc++.h>
using namespace std;
void checkPalin(string s ,int i,int j){
    if(i>=j){
        cout<<"Palindrome";
        return;
    }
    if(s[i]!=s[j]){
        cout<<"Not Palindrome";
        return;
    }
    checkPalin(s,i+1,j-1);
}
int main(){
    string s= "A man, a plan, a canal: Panama";
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    s.erase(remove(s.begin(), s.end(), ','), s.end());
    s.erase(remove(s.begin(), s.end(), ':'), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n = s.length();
    checkPalin(s,0,n-1);
    return 0;
}