# include<iostream>
using namespace std;
int sumOfDigit(int n){
    int ans = 0;
    while (n>0) // n= 456
    {                
        int last = n%10; // 6 5 4
        ans = ans+last; // 6 11 15
        n = n / 10; // 45 4 0

    }
    
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int res = sumOfDigit(n);
    cout<<res;
    return 0;
}