#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void performPermutation(vector<int>&nums, vector<vector<int>>&output,int i){
        if(i==(int)nums.size()-1){
            output.push_back(nums);
            return;
        }
        for(int j=i; j<nums.size();j++){
            swap(nums[i],nums[j]);
            performPermutation(nums,output,i+1);
            swap(nums[i],nums[j]);//backtracking
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>output;
        performPermutation(nums,output,0);
        return output;
    }
};