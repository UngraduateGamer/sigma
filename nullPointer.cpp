# include<iostream>
using namespace std;
int main(){
    int *ptr = NULL; // null pointer - it means this pointer does not point the any memory location

    // deferencing of null pointer is not possible
    cout<<ptr; // it returns error 
    return 0;
}