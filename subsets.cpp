#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>curr;
         powerset(nums,ans,curr,0);
         return ans;

    }
private:
    void powerset(vector<int>&nums, vector<vector<int>>&ans,vector<int>curr,int i){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        powerset(nums,ans,curr,i+1);
        curr.pop_back();
        powerset(nums,ans,curr,i+1);
    }
};