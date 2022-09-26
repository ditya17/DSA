// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mid, high = n , low =1;
        while (low<high){
            if (isBadVersion(low) == true) return low;
            mid = low + (high - low)/2;
            if (isBadVersion(mid) == true) {
                high = mid ;
            }
            else if (isBadVersion(mid) == false) {
                low = mid +1 ;
            }
        }
        return low;
    }
}; 
