class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        vector<vector<int>> arr;
        for (int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        vector<int> ans;
        while (st<end){
            if (arr[st][0]+arr[end][0]==target){
                ans.push_back(arr[st][1]);
                ans.push_back(arr[end][1]);
                return ans;
            } else if (arr[st][0]+arr[end][0]>target) {
                end--;
            } else {
                st++;
            }
        }
        return ans;
    }
};