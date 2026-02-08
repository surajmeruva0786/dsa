class Solution {
public:
    int maxArea(vector<int>& h) {
        int mw =INT_MIN;
        int l = 0;
        int n = h.size();
        int r = n-1;
        while (l<r){
            int w = r-l;
            int ht = min(h[l],h[r]);
            int curr = w*ht;
            mw = max(mw,curr);
            h[l]<h[r]?l++:r--;
        }
        return mw;
    }
};

//time complexity: O(n)
//space complexity: O(1)