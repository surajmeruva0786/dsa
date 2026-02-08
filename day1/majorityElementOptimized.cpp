class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq=1;
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]) {
                freq++;
            } else {
                freq=1;
            }
            if (freq>nums.size()/2){
                return nums[i];
            } 
        }
        return nums[0];
    }
};

//TIME COMPLEXITY: O(nlogn)
//SPACE COMPLEXITY: O(1)
