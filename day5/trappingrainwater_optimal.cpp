class Solution {
public:
    int trap(vector<int>& ht) {
        int ans=0;
        int n=ht.size();
        int l=0;
        int r=n-1;
        int lmax = 0, rmax=0;
        while (l<r){
            lmax = max(lmax,ht[l]);
            rmax=max(rmax,ht[r]);

            if (lmax<rmax){
                ans += (lmax-ht[l]);
                l++;
            } else {
                ans += (rmax-ht[r]);
                r--;
            }
        }
        return ans;
    }
};

//leetcode qn: 42

// time complexity: O(n)
// space complexity: O(1)