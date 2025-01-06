#include <iostream>
using namespace std;

int uniqueElements(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i] << " ";
            }
        }
    }
    return 0;
}
int main(){
    int arr[] = {1,6,5,7,2,1,8,9,2};
    int size = sizeof(arr)/sizeof(int);
    uniqueElements(arr,size);
    return 0;
}