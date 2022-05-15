class Solution {
public:
  void string(vector<char>&A){
    int n = A.size();
    for (int j=0;j<n/2;j++){
     swap(A[j],A[n-1-j]);
  }
  for (int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
  } 
    
    void reverseString(vector<char>& s) {
        string(s);
    }
};
