class Solution {
public:
    long arrangeCoins(int n) {
        //let there be x complete rows. So, no. of coins required are => x*(1+x)/2;
        //this required coins will be less than n or equal to n.
       int low = 1, high = n;
       long mid;
        while (high>=low){
            mid = low+(high-low)/2; 
            long x = (mid*(mid+1))/2;
            long y = ((mid+1)*(mid+2))/2;
            if (x == n) return mid;
            else if (x<n && y>n) return mid;
            else if (x>n) high = mid -1;
            else if (x<n) low = mid + 1;
        }
        return mid;
    }
};
