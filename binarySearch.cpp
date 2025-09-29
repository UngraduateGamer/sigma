# include<iostream>
using namespace std;
// binary search it only working for sorted array
int binarySearch(int *arr, int size,int key){ // 0(logn) time complextiy
    int start = 0 ;int end = size-1;
    while(start<=end){
        int middle = (start+end)/2;
        if(arr[middle] == key){
            return middle;
        }
        else if(arr[middle]<key){
            // right side checking --- (second half)
            start= middle+1;
        }
        else if(arr[middle]>key){
            // left side checking --- (first half)
            end=middle-1;
        }
    }
    return -1;
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
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int res = binarySearch(arr,n,key);
    cout<<"Element found in index: "<<res;
    return 0;
}