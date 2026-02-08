class Solution {
public:
    int maxArea(vector<int>& height) {
        int mw=INT_MIN;
        for (int i=0;i<height.size();i++){
            for (int j = i+1;j<height.size();j++){
                int w = j-i;
                int ht = min(height[i],height[j]);
                int area = w*ht;
                mw = max(area,mw);
            }        
        }
        return mw;
    }
};

//time complexity: O(n^2)
//space complexity: O(1)
//results in TLE.