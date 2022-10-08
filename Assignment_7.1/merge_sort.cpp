class Solution {
public:
    vector<int> mergearrays(vector<int>A,vector<int>B){
        vector<int>C;
        int i=0,j=0;
        while(i<A.size() && j<B.size()){
            if(A[i]<B[j]){
                C.push_back(A[i]);
                i++;
            }
            else {
                C.push_back(B[j]);
                j++;
            }
        }
        while(i<A.size()){
            C.push_back(A[i++]);
        }

        while(j<B.size()){
            C.push_back(B[j++]);
        }
        return C;
    }
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size()>1){
            vector<int>X;
            vector<int>Y;
            for (int i =0;i<nums.size()/2;i++){
                X.push_back(nums[i]);
            }
            for (int j =nums.size()/2;j<nums.size();j++){
                Y.push_back(nums[j]);
            }
            sortArray(X);
            sortArray(Y);
            nums = mergearrays(X,Y);
        }
        return nums;
    }
};
