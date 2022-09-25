int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count =0;
    int x,y;
    for (int i =0;i<A.size()-1;i++){
         x = A[i+1] - A[i];
         y = B[i+1] - B[i];
         
         if (abs(y)>abs(x)) swap(x,y);
         count = count + abs(x); 
    }
    return abs(count);
}
