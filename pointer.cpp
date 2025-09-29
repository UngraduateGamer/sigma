# include<iostream>
using namespace std;
int main(){
    int num1 = 10;
    int *ptr = &num1; // it is pointer that store another variable address.
    cout<<ptr;

    // pointer of pointer 
    int **ptr2 = &ptr; // it is pointer that store the pointer of pointer
    cout<<ptr2;
    
    return 0;
}