
// This is example of brute force of how to loop subarray
// GIven arr = {1,2,3,4,5}
// o/p--> 1,12,123,1234,12345
//         2,23,234,2345
//         3,34,345
//         4,45
//         5;


// Kadene Algorithms logic
// +ve + +ve = +ve value example(3,4);
// small -ve + big +ve = +ve value (-3,4);
//big negative + small +ve = -ve value (-4,3);
// Kadenes algo says that if we get - value then reset it to 0 ;


// Maximum Subarray sum
// given arr ={3,-4,5,4,-1,7,-8}
// o/p---> 15 for ur explaination ,the index lies between 2 to 5;



#include<iostream>
using namespace std;


void bruteforce(int arr[],int size){
    for(int start = 0;start<size;start++){
        for(int end = start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

}

int MaximumSubArraySum_BruteForce_Approach(int arr2[],int size2){
    int maxsum = INT_MIN;
    for(int start = 0;start<size2;start++){
        int currsum = 0;
        for(int end = start;end<size2;end++){
            currsum+=arr2[end];
            maxsum = max(currsum,maxsum);
        }
    }
    return maxsum;
}

// Using Kadene Algorithm

int MaximumSubArraySum_Kadens_Algo(int arr2[],int size2){
    int currentsum = 0;int maxsum = INT_MIN;
    for(int i=0;i<size2;i++){
        currentsum+=arr2[i];
        maxsum = max(currentsum,maxsum);
        if(currentsum<0) currentsum = 0;
    }
    return maxsum;
}
int main(){
    int size = 5;
    int arr[] = {1,2,3,4,5};
    int arr2[]= {3,-4,5,4,-1,7,-8};
    int size2 = 7;
    // we have two method ,one is brute force method
    // bruteforce(arr,size);
    cout<<"Using Brute Force approach : Maximum of subarray sum "<< MaximumSubArraySum_BruteForce_Approach(arr2,size2)<<endl;
    // Kadenes Algo Method
    cout <<"Using Kadene Algo  approach : Maximum of subarray sum "<< MaximumSubArraySum_Kadens_Algo(arr2,size2) <<endl;

    return 0;
}