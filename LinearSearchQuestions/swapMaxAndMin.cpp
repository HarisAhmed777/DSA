#include <iostream>
using namespace std;

int max(int arr[],int size){
    int maxindex=0;
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){ 
            max=arr[i];
            maxindex = i;
        } 
    }
    return maxindex;
}
int min(int arr[],int size){
    int minindex = 0;int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
            minindex = i;
        }
    }
    return minindex;
}

int main(){
    int arr [] = {7,1,0,1,2,6,3,2};
    int size = sizeof(arr)/sizeof(int);
    int maxindex = max(arr,size);
    int minindex = min(arr,size);
    swap(arr[maxindex],arr[minindex]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}