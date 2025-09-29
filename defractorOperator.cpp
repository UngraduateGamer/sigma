# include<iostream>
using namespace std;
int main(){
    // defractor opertor -- print the value of pointer
    int num = 34;
    int *ptr = &num;
    cout<<*(ptr); // it print the value of pointer
    return 0;
}