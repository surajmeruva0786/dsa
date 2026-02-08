class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        for (int st=0;st<nums.size();st++){
            int currSum = 0;
            for (int end=st;end<nums.size();end++){
                currSum += nums[end];
                maxSum = max(currSum,maxSum);
            }
        }
        return maxSum;
    }
};

//time complexity: O(n^2)
//space complexity: O(1)
//results in TLE