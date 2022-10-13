string Solution::solve(string A) {
   int x;
    vector<int>X (26, 0);
    for (int i =0;i<A.size();i++){
        x = A[i] - 'a';
        X[x]++;
    }
    string Z = "";
    string d;
    int e;
    for (int i =0;i<A.size();i++){
        if (X[A[i] - 'a'] > 0){
            e = X[A[i] - 'a'];
            d = to_string(e);
            Z = Z + A[i] + d;
            X[A[i] - 'a'] = 0;
        }
    }
    return Z;
}
