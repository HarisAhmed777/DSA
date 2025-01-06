// Functions in Vector

// size ----->vec.size() // to get the size of vector,
// push_back---->vec.push_back(25) to add an element in the last ,
// pop_back---->vec.pop_back() to delete the last element,
// front----->vec.front() ,to get the value in the 0th index,
// back----->vec.back() ,to get the value in the last index,
// at------->vec.at(2), to get the value in the 2nd index;  

// Now we will se the example
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    cout<<"The size of vector  = " <<vec.size() <<endl;
    vec.push_back(25);
    for(int i:vec){
        cout<<i <<endl;
    }
    vec.pop_back();
    cout<<"After pop back" <<endl;
    for(int i:vec){
        cout<<i <<endl;
    }
}