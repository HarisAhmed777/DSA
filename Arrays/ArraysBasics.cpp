#include <iostream>
using namespace std;

int main(){
    int marks[5];
    // Above is the basic array syntax;
    int marksofstudents[5] = {10,20,30,40,50};
    // Above is the giving values of to array
    double checkdoublesize []  = {10.1,10.2,10.3,10.4};
    int doublesz =  sizeof(checkdoublesize)/sizeof(double);
    cout<<"Size of double " << doublesz <<endl;
    // running loops on array
    int sz = sizeof(marksofstudents) /sizeof(int);
    for(int i=0;i<sz;i++){
        cout<<marksofstudents[i]<<endl;
    }



    return 0;

}