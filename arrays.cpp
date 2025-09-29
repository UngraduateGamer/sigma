# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter array elements :";

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cout<<arr[i]<<endl;
   }
    return 0;
}