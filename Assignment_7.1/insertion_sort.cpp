class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i =0;i<nums.size();i++){
            int j = i;
            while (j>0){
                if (nums[j]<nums[j-1]) {
                    swap(nums[j],nums[j-1]);
                    j--;
                }
                else break;
            }
        }
        return nums;
    }
};
