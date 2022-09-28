vector<int> Solution::allFactors(int A) {
    vector<int>X;
        for (int i =1;i<=sqrt(A);i++){
            if (A%i == 0 && i != A/i){
                 X.push_back(i);
                 X.push_back(A/i);
            }
            else if  (A%i == 0 && i == A/i){
                 X.push_back(i);
            }
        }
       sort(X.begin(),X.end());
    return X;
}
