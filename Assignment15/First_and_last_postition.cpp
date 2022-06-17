int start(vector<int>& nums, int target) {
    int first = -1;
    int low =0, high = nums.size()-1, mid;
    while (high>=low){
        mid = low + (high-low)/2;
        if (nums[mid] == target) {
            first = mid;
            high = mid-1;
        }
        else if (nums[mid]>target) high = mid-1;
        else low = mid +1;
    }
    return first;
}

int end(vector<int>& nums, int target) {
    int last = -1;
    int low =0, high = nums.size()-1, mid;
    while (high>=low){
        mid = low + (high-low)/2;
        if (nums[mid] == target) {
            last = mid;
            low = mid+1;
        }
        else if (nums[mid]>target) high = mid-1;
        else low = mid +1;
    }
    return last;
}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first , last ;
                first = start(nums, target);
                last = end(nums,target);
    vector<int>X;
        X.push_back(first);
        X.push_back(last);
    return X;
    }
};
