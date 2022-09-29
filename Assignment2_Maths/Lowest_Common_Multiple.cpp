// TLE for long values

long Solution::solve(int A, int B) {
    if (B>A) swap(A,B);
    if (A%B == 0) return A;
    long product =1;
    for (int i = 2;i<=B;i++){
        while (A%i == 0 && B%i == 0){
        product = product*i;
            A = A/i;
            B = B/i;
            }
        }
    product = product*A*B;
    return product;
}

//TLE again

long hcf(int A, int B){
    if (B>A) swap(A,B);
    if (B == 1) return 1;
    
    int x = A%B;
    if (x == 0) return B;
    return hcf(B,x);
}

long Solution::solve(int A, int B) {
    int z = hcf(A,B);
    if (B>A) swap(A,B);
 //   return(A*B)/z;
    return (A/z)*B;
}
