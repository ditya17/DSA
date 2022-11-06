int jumpingOnClouds(vector<int> c, int k) {
    int e = 101;
    if (c[0] == 1) e = 103;
    int x = 2;
    for (int i =0;i<c.size();i = (i+k)%c.size()){
        if (i == 0) x--;
        if (c[i] == 1 ) e = e-2;
        e--;
        if (x == 0) return e;
    }
    return 0;
}
