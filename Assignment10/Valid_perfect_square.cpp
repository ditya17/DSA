class Solution {
public:
    bool isPerfectSquare(int num) {
        int low =0,high = num;
        long mid;
        while(high>=low){
         mid = low+ (high -low)/2;
            long z = mid*mid;
            if (z == num) return 1;
            else if (z<num) low = mid+1;
            else high = mid -1;
        }
    return 0;
    }
};
