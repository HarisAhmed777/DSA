// Vector is similar as array
// Array we have to say the size of the array,which is fized;
// But Vector size d dynamic
// It is in STL ,library
// we have to include STL to use vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 1st Method:
    // Declaration of vector 
    // if we initialize like this the size of the vector is 0 
    // if we try to cout << vec[0] ,o/p-->segmentation error
    vector<int> vec;

    // 2nd Method:
    vector<int> vec2 ={1,2,3};
    cout<<vec2[1]; 

    // 3rd method
    // the first parameter is size of the vector
    // the second parametr is value in all index;
    // 0,0,0 
    vector<int> vec3 (3,0);

    return 0;
}