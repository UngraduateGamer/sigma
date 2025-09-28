# include<iostream>
using namespace std;
int sum (int a, int b){
    cout<<"by";
    return a+b;
}
float sum(float a, float b){
    return a+b;
}
int main(){
    float a=4.2;float b=4.2;
    cout<<sum(a,b);
    return 0;
}