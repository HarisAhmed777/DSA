#include <iostream>
using namespace std;

int deciamltobimary(int number){
    int ans=0;;
    int i=0;
    int rem;
    int power = 1; //10 power 0 is 1 
    // 10 power 1 is 10 ,so 10*1 = 10 ,10 power 3 is 100 ,10*10 = 100

    while(number>0){  //for example n = 6
        rem=number%2; // 1st step: 3%2 = 0 ,2nd Step:3%2 =1 ,3rd step :1%2 = 1
        number /= 2; // 1nd step:6/2 =  3,2nd step : 3/2  =1,3rd step : 1/2 = 0
        ans += rem*power; // 1st step: 0*1 = 0,0 * 10 = 0  ,2nd step : 0+10 = 10,3rd step:100+1 = 101
        power *=10; // 1st step:1* 10 = 10 ,2nd step:10*10 =100

    }
    cout<< ans <<endl;
    return 1;
}

int main(){
    
    deciamltobimary(1);
    deciamltobimary(2);
    deciamltobimary(3);
    deciamltobimary(4);
    deciamltobimary(5);
    deciamltobimary(6);
    deciamltobimary(7);
    deciamltobimary(8);
    deciamltobimary(9);
    deciamltobimary(10);


    return 0;

}