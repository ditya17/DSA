class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for (int i =0;i<arr.size();i++){
            if (mp.find(arr[i]) == mp.end()){
                mp[arr[i]] =1;
            }
            else if (mp.find(arr[i]) != mp.end()){
                mp[arr[i]]++;
            }
        }
        int count =0;
        for (string i : arr){
            if (mp[i] >1) continue;
            else if (mp[i] == 1) count++;
            
            if (count == k) return i;
        }
      return "";  
    }
};
