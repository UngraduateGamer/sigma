# include<iostream>
using namespace std;
int findSmallest(int arr[],int size){
    int min= arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter array elements :";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = findSmallest(arr,n);
    cout<<"Smallest Number of array is: "<<res;
    
    return 0;
}