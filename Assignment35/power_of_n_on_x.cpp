class Solution {
public:
    double myPow(double x, int n) {
        
        if(x==1)
            return 1.0;
        
        if(n==0)
            return 1.0;
        
        double ans = myPow(x,n/2);
        if(n<0){
            if(n%2==0) return ans*ans;
            else return (ans*ans)/x;
        }
        else{
            if(n%2==0){
                return ans*ans;
            }
            return x*ans*ans;
        }

    }
};
