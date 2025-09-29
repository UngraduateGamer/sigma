# include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    int n; int key;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter array elements :";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter finding number: ";
cin>>key;
    int res = linearSearch(arr,n,key);
    cout<<"Key found in index: "<<res;
    return 0;
}