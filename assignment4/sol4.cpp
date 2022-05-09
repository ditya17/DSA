class Solution {
public:
    int addDigits(int n) {
        int sum =0;
        while (n>0){
         sum = sum+n%10;
         n = n/10;
       }
        if(sum>9) return addDigits(sum);
        return sum;
   }
};
