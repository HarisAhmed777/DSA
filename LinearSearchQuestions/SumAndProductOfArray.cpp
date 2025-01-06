#include <iostream>
using namespace std;
int sum(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum +=arr[i];
    }
    cout<<"The sum of the array is :" << sum <<endl;
    return 0;

}
int product(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    cout<<"The product of array is :"<<product<<endl;
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    sum(arr,size);
    product(arr,size);
}