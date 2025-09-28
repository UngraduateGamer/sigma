# include<iostream>
using namespace std;
char nextChar(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else if(ch == 'Z'){
        return 'A';
    }
    else{
        return ch=ch+1;
    }
}
int main(){
    char ch;
    cout<<"Enter character :";
    cin>>ch;
    char next = nextChar(ch);
    cout<<next;
    return 0;
}