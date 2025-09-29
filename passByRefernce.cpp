# include<iostream>
using namespace std;
int changeNum(int *num){
    *num = 50;
    cout<<*num;
}
int main(){
    // pass by refence- it pass the address of the variable. so the change will be affect to the variable
    int num = 20;
    cout<<"original value of num :"<<num;
    //  calling function
    cout<<"\n function calling . num =";
    changeNum(&num);
    cout<<"\noriginal value of num :"<<num;

    return 0;
}