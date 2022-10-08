class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low =0, high = nums.size() -1;
        int mid;
        if (nums.size() ==1) return nums[0];
        if (nums[low] != nums[low+1] ) return nums[low];
        while (low <=high){
            mid = low + (high-low)/2;
            if (nums[mid] == nums[mid-1] && (mid-1)%2 != 0)  high = mid -1 ;
            else if (nums[mid] == nums[mid+1] && (nums.size()-mid)%2 != 0) low = mid +1 ;
            else if (nums[mid] == nums[mid+1] && (nums.size()-mid)%2 == 0) high = mid -1 ;    
            else if (nums[mid] == nums[mid-1] && (mid-1)%2 == 0) low = mid +1;
            else return nums[mid];
        }
        return 0;
    }
};
