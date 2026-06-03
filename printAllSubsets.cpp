class Solution {
public:
    void getAllSS(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSS){
        if (i==nums.size()){
            //store subsets
            allSS.push_back(ans);
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllSS(nums,ans,i+1,allSS);

        //exclude
        ans.pop_back();
        getAllSS(nums,ans,i+1,allSS);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSS;
        vector<int> ans;
        getAllSS(nums,ans,0,allSS);
        return allSS;
    }
};

//TC = O(2^n*n) = total calls x work done in each
//SC = O(2^n*n)
