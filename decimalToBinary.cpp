# include<iostream>
# include<cmath>
using namespace std;
void decimalToBinary(int n){
   int last = 0; int power = 0; int ans = 0;
    while(n>0){
        last =  n % 2;
        ans = ans + last * (pow(10,power)) ;
        n=n/2;
        power++;  
    }
    cout<<ans;
}
int main(){
    int decimal;
    cout<<"Enter Decimal number: ";
    cin>>decimal;
    decimalToBinary(decimal);

}