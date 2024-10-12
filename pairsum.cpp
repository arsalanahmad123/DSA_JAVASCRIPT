#include<iostream>
#include<vector>
using namespace std;


// Brute Force Approach

// vector<int> pairSum(vector<int> nums,int target){

//     vector<int> ans;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);

//                 return ans;
//             }
//         }
//     }

//     return ans;

// }
// Brute Force Approach ends



vector<int> pairSum(vector<int> nums,int target){

    vector<int> ans;
    int i = 0, j= nums.size()-1;

    while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;

}

int main(){

    vector<int> vec = {2,7,8,9,11};

    int target = 20;

    vector<int> ans = pairSum(vec,target);

    cout<<ans[0]<<" , "<<ans[1];

    
    
}