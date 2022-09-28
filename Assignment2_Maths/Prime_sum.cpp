bool prime(int n){
    if (n==2) return 1;
    if (n % 2 == 0) return 0;
    for (int i =3;i<=sqrt(n);i+=2){
        if (n%i == 0) return 0;
    }
    return 1;
}
vector<int> Solution::primesum(int A) {
    int x;
    if (prime(A - 2)) return {2, A-2};
    for (int i = 3; i<=A/2; i+=2){
        if (!prime(i)) continue;
        x = A - i;
        if (prime(x)) return {i, x};
    }
    return {0,0};
}
