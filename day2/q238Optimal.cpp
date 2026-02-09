class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        // vector<int> p(n,1);
        // vector<int> s(n,1);
        // p[0]=1;
        // s[n-1]=1;
        int suffix = 1;
        for (int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        for (int i=n-2;i>=0;i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
       
        return ans;
    }
};

//time