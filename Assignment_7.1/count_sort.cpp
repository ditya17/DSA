class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>X(5*(1e4),0);
        vector<int>Y((1e4),0);
        vector<int>Z;
        for (int i =0;i<nums.size();i++){
            if (nums[i]>=0) {
                X[nums[i]]++;
            }
            else if (nums[i]<0){
                Y[abs(nums[i])]++;
            }
        }
        int m = Y.size() -1 ;
        int n =0;
        while (m>0){
            if (Y[m]>0){
                Z.push_back(m*(-1));
                Y[m]--;
                continue;
            }
            m--;
        }
        while (n<X.size()){
            if (X[n] > 0){
                Z.push_back(n);
                X[n]--;
                continue;
            }
            n++;
        }
    return z;
    }
};
