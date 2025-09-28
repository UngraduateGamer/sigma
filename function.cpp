# include<iostream>
using namespace std;
void printName(string name){
    cout<<"Hello"+name;
}
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int factorial(int n){
    int fact = 1;
    for(int i=n;i>=1;i--){
        fact = fact * i;
    }
    return fact;
}
int multi(int a,int b){
    return a*b;
}
int main(){
    // printName("Rahul");
    // int res = multi(3,4);
    // cout<<endl;
    // cout<<res;
    // cout<<endl;
    // cout<<isEven(510);
    int res= factorial(0);
    cout<<res;
    return 0;
}