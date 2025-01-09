// given an sorted vector of {2,7,11,15} target = 9;
// find the pair of element which is equal to target and return it 

#include <iostream>
#include <vector>
using namespace std;


vector<int> bruteForce_Approach_PairSum(vector<int> vec,int target){
    vector<int>ans ;
    int siz = size(vec);
  

    for (int i=0;i<siz;i++){
        for(int j=i+1;j<siz;j++){
            int pairsum = vec[i]+vec[j];
      

            if(pairsum==target){
                ans.push_back(i);
                ans.push_back(j);
                cout <<"ans is returned"<<endl;
                return ans;
            }
        }
    }
    return ans;
} 

// two poionters approach 
// Understand the question 
// it is a sorted vector 
// so ,we will take two pointers approach
// one point is on start element ,another one is of last element 
// we will add i +j we will code accroding to thrre logic now

vector<int> two_pointers_approach(vector<int> vec,int target){
    vector <int>ans;int start = 0;int end = size(vec)-1;
    while(start<end){
    int pairsum = vec[start]+vec[end];
        if(pairsum<target){
            start++;
        }
        else if(pairsum>target){
            end--;
        }
        else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector <int> vec = {2,7,11,15};
    int target = 13;
    // bruteforce approach
    vector<int> finalans = bruteForce_Approach_PairSum(vec,target);
    cout<<finalans[0]<<","<<finalans[1]<< endl;

    //optional approach
    vector<int> optimalapporach = two_pointers_approach(vec,target);
    cout<<optimalapporach[0]<<"," <<optimalapporach[1]<<endl;
    return 0;
}