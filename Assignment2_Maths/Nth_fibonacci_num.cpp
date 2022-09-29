// TLE for 10^9

unordered_map<long,long>mp;
long long recur(int n){
    if (n == 1 || n == 2) return 1;
    
    long long x = 1e9 + 7;
    if (mp.find(n) != mp.end()) return mp[n];
    
    mp[n] = (recur(n-1)%x + recur(n-2)%x)%x;
    return mp[n];
}
int Solution::solve(int A) {
    long long x = recur(A);
    return x;
}
