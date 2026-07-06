while (n != 0) {
    temp = temp * 10 + (n % 10);
    n /= 10;
} 
return temp;
}
int main(){
    int n = 4554;
    int rev=better(n);
    if(rev/n==1){cout<<"palindrome";}
    else cout << "not palindrome";
    return 0;
}