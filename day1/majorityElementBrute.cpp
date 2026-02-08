class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for (int val:nums){
            int freq=0;
            for (int el:nums){
                if (el==val){
                    freq++;
                }
            }
            if (freq>nums.size()/2){
                return val;
            }
        }
        return -1;
    }
};

//TIME COMPLEXITY: O(n^2)
//SPACE COMPLEXITY: O(1)
