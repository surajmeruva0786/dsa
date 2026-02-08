class Solution {
public:

    void reverseArray(vector<int>& nums,int pivot){
        int i=pivot;
        int j = nums.size() - 1;
        while (i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int piv = -1;
        for (int i=nums.size()-2;i>=0;i--){
            if (nums[i]<nums[i+1]){
                piv = i;
                break;
            }
        }

        if (piv == -1){
            reverseArray(nums,piv+1);
            return;
        }

        for (int i=nums.size()-1;i>piv;i--){
            if (nums[i]>nums[piv]){
                swap(nums[i],nums[piv]);
                break;
            }
        }
        reverseArray(nums,piv+1);
    }
};

//TIME COMPLEXITY: O(n)
//SPACE COMPLEXITY: O(1)
