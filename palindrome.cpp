# include<iostream>
using namespace std;
bool isPalindrome(int n){
    int temp = n; int rev = 0; int last =0;
    while(n>0){
        last = n % 10; // get last digit
        rev = rev*10 + last; // reverse 
        n=n/10; // remove last digit
    }
    if(rev == temp){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int res = isPalindrome(n);
    if(res){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}