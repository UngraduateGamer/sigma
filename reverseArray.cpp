# include<iostream>
using namespace std;
void swap(int *a, int *b){
    *a = *a + *b; // 30 
    *b = *a - *b; // 10
    *a = *a - *b; // 20
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void reverseAnArray1(int arr[],int size){
    //using extra spaces
    int newArr[size];
    for(int i=0;i<size;i++){
        int j = size-i-1; // 
        newArr[j] = arr[i];  
    }
    for(int i=0;i<size;i++){
        arr[i]=newArr[i];
    }

}
void reverseAnArray2(int arr[],int size){
    // using 2 pointers
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


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
    reverseAnArray2(arr,n);
    printArr(arr,n);
    return 0;
}