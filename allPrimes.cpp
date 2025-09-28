# include<iostream>
# include<cmath>
using namespace std;
bool checkPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void allPrimes(int n){
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<endl;
        }
    }
}
int main(){
    allPrimes(50);
    return 0;
}