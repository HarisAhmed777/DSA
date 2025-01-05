#include <iostream>
using namespace std;


int binarytodecimal(int Number){
    int ans = 0;int rem = 0;int power = 1;
    while(Number >0){
        rem = Number%10 ;
        Number/=10;
        ans +=(rem*power);
        power*=2;
    }
    return ans;
}
int main(){
    int number;
    cout<<"Enter the number in binary";

    cin>> number;
    cout << binarytodecimal(number) <<endl;
    return 0;
}