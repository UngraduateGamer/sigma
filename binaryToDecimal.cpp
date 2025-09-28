# include<iostream>
# include<cmath>
using namespace std;
void binaryToDecimal(int n){
   int last = 0; int power = 0; int ans = 0;
    while(n>0){
        last =  n % 10;
        ans = ans + last * (pow(2,power)) ;
        n=n/10;
        power++;  
    }
    cout<<ans;
}
int main(){
    int binary;
    cout<<"Enter Binary number: ";
    cin>>binary;
    binaryToDecimal(binary);
}