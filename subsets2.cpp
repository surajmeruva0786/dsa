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

        int idx = i+1;
        while (idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        getAllSS(nums,ans,idx,allSS);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> allSS;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        getAllSS(nums,ans,0,allSS);
        return allSS;
    }
};

//TC = O(2^n*n) = total calls x work done in each
//SC = O(2^n*n)
