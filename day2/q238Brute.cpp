class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        for (int i=0;i<n;i++){
            long long prod = 1;
            for (int j=0;j<n;j++){
                if (i!=j){
                    prod *= nums[j];
                }
            }
            ans[i]=prod;
        }
        return ans;
    }
};

//time complexity: O(n^2)
//space complexity: O(1)
//results in TLE.