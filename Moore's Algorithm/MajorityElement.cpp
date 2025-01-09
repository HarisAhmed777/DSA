// 69. Majority Element
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109

#include <iostream>
using namespace std;
#include <vector>
#include <cmath>


// given formular is floor(n/2)
// thts is for example number is (total size /2)
// in this first example n= 5 --> 5/2 -->2.5 ans floor(2.5) = 2;
// any number in the vecotr >n/2  is a majority elemnt 


int bruteforce_majority_element(vector<int> vec){
    int floorvalue = floor(size(vec)/2);
    int assumemajority = 0;

    for(int i=0;i<size(vec);i++){
            for (int j=i+1;j<size(vec);j++){
                cout<<"j loop is running "<<endl;
            if(vec[i]==vec[j]){
                assumemajority++;
                if(assumemajority>floorvalue){
                    return vec[i];
                }
            }
        }
    }
    return -1;
}
int Moore_Approach(vector<int> vec){
    int freq = 0;int ans =0;
    for(int i=0;i<vec.size();i++){
        if(freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]) freq++;
        if(ans!=vec[i]) freq--;
    }
    return ans;
}
int main(){
    vector <int> vec = {2,4,7,7,2,7,7,5,7,7};
    // bruteforce apporaoch;
    cout<<bruteforce_majority_element(vec)<<endl;;
    // Moore's Voting approach
    cout<<Moore_Approach(vec)<<endl;
    return 0;
}
 
