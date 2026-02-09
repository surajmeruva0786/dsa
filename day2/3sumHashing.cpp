class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        set<vector<int>> uniqTrip;;
        for (int i = 0;i<n;i++){
            int tar = -nums[i];
            set<int> s;
            for (int j=i+1;j<n;j++){
                int toFind = tar-nums[j];

                if (s.find(toFind)!=s.end()){
                    vector<int> trip ={nums[i],nums[j],toFind};
                    sort(trip.begin(),trip.end());
                    uniqTrip.insert(trip);
                }
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(uniqTrip.begin(),uniqTrip.end());
        return ans;
    }
};

//time complexity: O(n^2*log(unique triplets))
//space complexity: O(unique triplets+n)
//results in TLE.