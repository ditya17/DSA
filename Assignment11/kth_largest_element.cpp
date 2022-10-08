// without using binary search

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()-k];
//     }
// };

// with binary search

class Solution {
public:
     int smallerelements(vector<int>& nums, int k){
        int count=0;
        for (int i =0;i<nums.size();i++){
            if (nums[i]<=k) count++;
        }
        return count;
    }
    int findKthLargest(vector<int>& nums, int k) {
        k = nums.size()-k+1;
        if (nums.size()==1) return nums[0];
        int low = -10000, high = 10000;
        int ans = low;
        while (low<=high){
            int mid = low + (high - low)/2;
            int x = smallerelements(nums,mid);
            if (x<k) {
                low = mid+1;
            }
            else if (x>=k){
                ans = mid;
                high = mid -1;
            }
        }
        return ans;
    }
};
