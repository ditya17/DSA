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
