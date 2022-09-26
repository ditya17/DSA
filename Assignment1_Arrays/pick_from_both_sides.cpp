int Solution::solve(vector<int> &A, int B) {
    int max =INT_MIN;
    int sumleft =0, sumright =0;
    for (int i = A.size() - B; i<A.size(); i++){
        sumright = sumright + A[i];
    }
    max = sumright;
    for (int i =0;i<B;i++){
        sumleft = sumleft + A[i];
        sumright = sumright - A[A.size() - B + i];
        
        if (max< sumleft + sumright){
            max = sumleft+sumright;
        }
    }
    return max;
}
