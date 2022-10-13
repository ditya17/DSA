string Solution::solve(string A, string B) {
    int bulls = 0, cows =0;
    for (int i =0;i<A.size();i++){
        if (A[i] == B[i]) {
            bulls++;
            A[i] = 'x';
            B[i] = 'x';
        }
    }
    vector<int >a(10,0);
    vector<int > b(10,0);
    for (int i =0;i<A.size();i++){
        if (A[i] == 'x') continue;
        a[A[i] - '0']++;
    }
    for (int i =0;i<B.size();i++){
        if (B[i] == 'x') continue;
        b[B[i] - '0']++;
    }
    for (int j =0;j<10;j++){
        if (a[j]<b[j] ) cows = cows + a[j];
        else cows = cows + b[j];
    }
    return to_string(bulls) + "A" + to_string(cows) + "B";
}
