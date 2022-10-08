void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int>> B;
    vector <int >X(A.size(),0);
    for (int i =0;i<A.size();i++){
        for (int j = A.size()-1;j>=0;j--){
            X[A.size() - j - 1] = A[j][i];
        }
        B.push_back(X);
    }
    A = B;
}
