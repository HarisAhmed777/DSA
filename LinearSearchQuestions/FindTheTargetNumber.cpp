#include <iostream>
using namespace std;

int findthetargetarr(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<< i <<"is the index where your target lies";
            return 1;
        }
    }
    cout << "There is no number in array as the given target number";
    return 1;
}
int main(){
    int target;
    int arr[] = {4,2,7,8,1,2,5};

    cout<<"Enter the target number"<<endl;
    cin>>target;
    int size = sizeof(arr)/sizeof(int);
    findthetargetarr(arr,size,target);
    return 0;
}