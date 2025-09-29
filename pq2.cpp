# include<iostream>
using namespace std;
void mutliplyBy2(int &a, int &b, int &c){
    a*=2;
    b*=2;
    c*=2;
}
int main(){
    int x =1;int y=2;int z=3;
    mutliplyBy2(x,y,z);
    cout<<x<<y<<z;
    return 0;
}