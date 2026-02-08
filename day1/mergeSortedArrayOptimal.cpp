class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        for (int x = 0; x < m + n && (i >= 0 || j >= 0); x++) {
            if (j < 0 || (i >= 0 && nums1[i] > nums2[j])) {
                nums1[idx] = nums1[i];
                i--;
            } else {
                nums1[idx] = nums2[j];
                j--;
            }
            idx--;
        }
    }
};

//TIME COMPLEXITY: O(m+n)
//SPACE COMPLEXITY: O(1)
