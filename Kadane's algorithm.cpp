#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n = 5;
    int arr[n] = { 4,1,1,5,5};


    // Brute Force Approach

    int maxSum = INT_MIN;

    // for(int i=0;i<n;i++){
    //     int currSum = 0;
    //     for(int j=i;j<n;j++){
    //         currSum+=arr[j];
    //         maxSum = max(maxSum,currSum);
    //     }
    // }

    // cout<< "sum : "<<maxSum<<endl;

    //  End of Brute Force approach

    // Kadane's algorithm Approach


    for(int i=0;i<n;i++){
        int currSum = 0;
        
        currSum+=arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum = 0;
        }
        
    }

    cout<< "sum : "<<maxSum<<endl;

    //  End of Kadane's algorithm approach 

    
}