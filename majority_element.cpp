#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// Brute Force Approach

// int majorityElement(vector<int>& nums){

//     int n = nums.size()/2;

//     for(int val: nums){
//         int freq = 0;

//         for(int el: nums){
//             if(val==el){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             return val;
//         }
//     }
//     return -1;

// }

// Brute Force Approach ends



// Optimized after sorting array

// int majorityElement(vector<int>& nums) {
//     int n = nums.size();  
//     sort(nums.begin(), nums.end()); 

//     int currElement = nums[0];
//     int freq = 1; 

//     for (int i = 1; i < n; i++) {
//         if (nums[i] == currElement) {
//             freq++;  
//         } else {
//             currElement = nums[i];  
//             freq = 1; 
//         }

//         if (freq > n / 2) {
//             return currElement;
//         }
//     }

// }

// End of optimized


// Moore's voting algo

int majorityElement(vector<int>& nums) {
    int n = nums.size();  
    sort(nums.begin(), nums.end()); 

    int currElement = nums[0];
    int freq = 1; 

    for (int i = 1; i < n; i++) {
        if (nums[i] == currElement) {
            freq++;  
        } else {
            currElement = nums[i];  
            freq = 1; 
        }

        if (freq > n / 2) {
            return currElement;
        }
    }

}

// End of Moore's voting algo



int main(){

    vector<int> vec = {2,2,1,1,1,2,2};


    int num;

    num = majorityElement(vec);

    cout<<num;
    

    
    
}