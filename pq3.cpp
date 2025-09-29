# include<iostream>
using namespace std;
void mutliplyBy2(int &a, int &b, int &c){
    a*=2;
    b*=2;
    c*=2;
}
int main(){
    int a = 32; 
    int *ptr = &a;
    
    char  ch = 'A';
    char &cho = ch;
    cho+=a; // cho = cho+ 32;
    *ptr +=ch; // *ptr = 'A' + *ptr
    cout<<a<<" , "<<ch<<endl;

    return 0;
}