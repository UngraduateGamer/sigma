# include<iostream>
using namespace std;
int main(){
    int a =5;
    int *b = &a;
    // cout<<++b; // b = b + 1 ... b = b +1*sizeof(int)
    cout<<b+5;// b + 5.... b+5*sizeof(int)... b+5*4.... b+20
    return 0;
}
