#include <iostream>
using namespace std;


// Important Note 
// We also have a predefined swap function
// Syntax is ---> swap(arr[i],arr[lastvalue]);
int reverseAnArray(int arr[],int size){
    int middlevalue = size/2;
    int lastvalue = size-1;
    int temp;
    for(int i=0;i<middlevalue;i++){
        temp=arr[i];
        arr[i] = arr[lastvalue];
        arr[lastvalue] = temp;
        lastvalue-=1; 
    }
    for(int i=0;i<size;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int arr2[] = {4,2,7,8,1,2,5,3};
    int sizeofsecondarray = sizeof(arr2)/sizeof(int);

    int size = sizeof(arr)/sizeof(int);
    reverseAnArray(arr,size);
    reverseAnArray(arr2,sizeofsecondarray);

    return 0;

}