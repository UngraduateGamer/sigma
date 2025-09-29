# include<iostream>
using namespace std;
int findLargest(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
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

    int res = findLargest(arr,n);
    cout<<"Largest Number of array is: "<<res;
    
    return 0;
}