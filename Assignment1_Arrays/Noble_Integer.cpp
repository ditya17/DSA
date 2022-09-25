int Solution::solve(vector<int> &A) {
    // int x, count;
    // for (int i =0;i<A.size();i++){
    //     x = A[i];
    //     count =0;
    //     for (int j = 0;j<A.size();j++){
    //         if (A[j]>x){
    //             count++;
    //         }
    //     }
    //     if (count == x) return 1;
    // }
    // return -1;
    sort(A.begin(),A.end());
    int x = A.size();
    if (A[x-1] == 0) return 1;
    int i = 0;
    while (i<A.size()){
        if (A[i+1] == A[i] ){
            i++;
            continue;
        }
         if (A[i] ==  (A.size() -i -1 )) {
             return 1;
         }
        i++;
    }
    return -1;
}
