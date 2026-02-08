class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c(m+n);
        int a = 0;
        int b = 0;
        
        for (int i=0;i<m+n;i++){
            if (a == m) {
                c[i] = nums2[b];
                b++;
            }
            else if (b == n) {
                c[i] = nums1[a];
                a++;
            }
            else if (nums1[a]>nums2[b]){
                c[i]=nums2[b];
                b++;
            } else {
                c[i]=nums1[a];
                a++;
            }
        }

        for (int j=0;j<m+n;j++){
            nums1[j]=c[j];
        }

    }
};

//TIME COMPLEXITY: O(m+n)
//SPACE COMPLEXITY: O(m+n)