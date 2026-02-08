class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum=0;
        for (int i:nums){
            sum ^= i;
        }
        return sum;
    }
};

//time complexity: O(n)
//space complexity: O(1)