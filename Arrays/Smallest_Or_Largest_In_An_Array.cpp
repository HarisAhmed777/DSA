#include <iostream>
using namespace std;
int main(){
    int numbers[10] = {129,21,432,12,43,7,12,548,981,125};
    int min = numbers[0];
    int max = numbers[0];
    int sz = sizeof(numbers)/sizeof(int);
    for(int i=0;i<sz;i++){
        if(min>numbers[i]) {
            min=numbers[i];
            }
    }
    cout<<"Smallest number in an array is :" <<min <<endl;
    for(int i=0;i<sz;i++){
        if(max<numbers[i]) max=numbers[i];
    }
    cout<<"The largest number in an array is :"<<max <<endl;
    return 0;
}