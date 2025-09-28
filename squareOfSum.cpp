# include<iostream>
using namespace std;
int squareOfSum(int a, int b){
    return ((a*a)+(b*b)+(2*a*b));
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<squareOfSum(a,b);
    return 0;
}