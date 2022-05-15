class Solution {
public:
    int reverse(int x) {
        int a =0;
        int max = INT_MAX/10;
        int min = INT_MIN/10;
        
        while (abs(x)>0){
                if (a>max || a<min) 
                 {
                      return 0;
                 }
                a = a*10+x%10;
                x = x/10;
            }
        return a;    
    }
};
