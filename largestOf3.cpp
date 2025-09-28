# include<iostream>
using namespace std;
int largestOf3(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main(){
    int a,b,c;
    cout<<"Enter a and b and : ";
    cin>>a>>b>>c;
    cout<<largestOf3(a,b,c);
    return 0;
}