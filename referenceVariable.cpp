# include<iostream>
using namespace std;
void changeA(int &num){
    num = 56;
    cout<<num;
}
int main(){
    //reference variable -- it is variable that point the same memory location with different name
    int a = 5;
    cout<<" value of a :"<<a;
    cout<<"value of num is :";
    changeA(a);
    cout<<" value of a :"<<a;


    return 0;
}