class Solution {
public:
    int mySqrt(int x) {
        int low =0,high = x;
        long mid;
        while(high>=low){
         mid = low+ (high -low)/2;
            long z = mid*mid;
            long y = (mid+1)*(mid+1);
            if (z == x) return mid;
            else if (z<x && y>x ) return mid;
            else if (z<x) low = mid+1;
            else high = mid -1;
        }
    return mid;
    }
};
