# include<iostream>
using namespace std;
void printName(string name){
    cout<<"Hello"+name;
}
int factorial(int n);
int binCoeff(int n,int r){
    int v1 =factorial(n);
    int v2 =factorial(r);
    int v3 =factorial(n-r);
    int res  = v1/(v2*v3);
    return res;
}
int factorial(int n){
    int fact = 1;
    for(int i=n;i>=1;i--){
        fact = fact * i;
    }
    return fact;
}

int main(){
  cout<<binCoeff(4,2);
    return 0;
}