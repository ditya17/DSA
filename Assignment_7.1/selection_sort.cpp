class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i = 0;i<nums.size() -1;i++){
            for (int j = i;j<nums.size();j++){
                if (nums[i]>nums[j]) swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};
