#include <iostream>
using namespace std;


// In this file we have solved 7 basic questions
// 1:Sum of numbers from 1 to N
// 2:Factorail of N 
// 3:Calculate the sum of Digit
// 4:Calculate nCr binomial coefficient of n & r
// 5:Fiboncci series of N Numbers
// 6:Prime Number or not from 2 to N 
// 7:Check if the number is prime or not


// Question 1: Calculate the sum of numbers from 1 to N:
int CalculateSum(int N){
    int ans =0;
    for(int i=0;i<=N;i++){
        ans+=i;
    }
    return ans;
}

//Question 2:Calculate factorial of N :
int factorial(int N){
    int ans = 1;
    for(int i=1;i<=N;i++){
        ans*=i;
    }
    return ans;
}
//Question 3 : Calculate the sum of Digit:
int SumOfDigit(int number){
    int reminder ,result;
    while (number>0){
         reminder = number%10;
         result+=reminder;
         number/=10;
    }
    return result;
}

// Question 4:Calculate nCr binomial coefficient of n & r
        // solution
        // formula
        // n factorial / r factorial (n-r) factorail

    //   n! 
    //  ------
    //  r!(n-r)!

    int Binomial_Coefficient(int n,int r){
        int nfact =1,rfact=1 ;
        int minusvalue = n-r;
        int bothminus=1 ;
        for(int i=1;i<=n;i++){
            nfact*=i;
        }
        for(int i=1;i<=r;i++){
            rfact*=i;
        }
        for(int i=1;i<=minusvalue;i++){
            bothminus*=i;

        }
        int denominatorvalue = rfact * bothminus;
        int ans = nfact/denominatorvalue;
        return ans;
    }


//Question 5 : Fiboncci series of N Numbers
 // o/p     0 1 1 2 3 5 8 13

 void Fiboncci(int N){
    int firstnumber = 0;
    int secondnumber = 1;
    int thirdnumber ;
    cout<< firstnumber<< " " << secondnumber << " ";
    for(int i=0;i<N;i++){
        thirdnumber = firstnumber+secondnumber;
        cout<<thirdnumber << " ";
        firstnumber = secondnumber;
        secondnumber = thirdnumber;

    }
    cout<<endl;
 } 

 //Question 6 :Prime Number or not from 2 to N 
 bool isprime(int n){
    if(n==1) return false;
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
 }

 void primenumbers(int N){
    for(int i=1;i<=N;i++){
        if(isprime(i)) cout <<i <<" ";
    }
    cout<<endl;
 }

 //Question 7 : Check if the number is prime or not:
//  Simple we already have the code to chek the number is prime or not
// so just call the function:
int CheckNumberIsPrimeOrNot(int N){
    if(isprime(N)){
         cout<< N <<" is a prime number "<<endl;
    }
    else {
        cout<<N << " is not a prime number"<<endl;
        }
    return 0;
}
int main(){
        cout<<CalculateSum(10)<<endl;
        cout<<factorial(4)<<endl;
        cout<<SumOfDigit(2356)<<endl;
        cout<<Binomial_Coefficient(8,2) <<endl;
        cout<<Binomial_Coefficient(6,3) <<endl;
        Fiboncci(6);
        primenumbers(10);
        CheckNumberIsPrimeOrNot(26);
        

    return 0;
}