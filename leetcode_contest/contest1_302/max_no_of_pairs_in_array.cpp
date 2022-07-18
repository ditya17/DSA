class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int count = 0;
        int i =0;
        while (i<nums.size()){
            int key = nums[i];
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]==key){
                    count++;
                    nums.erase(nums.begin()+j);
                    nums.erase(nums.begin()+i);
                    i--;
                    break;
                }
            }
            i++;
        }
        vector<int>answer;
        answer.push_back(count);
        answer.push_back(nums.size());
        
        return answer;
    }
};
