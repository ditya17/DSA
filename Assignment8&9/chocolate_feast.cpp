int chocolateFeast(int n, int c, int m) {
    int count =0;
    int w =0;
    int o,p;
    count = n/c; 
    w = count;
    while (w>=m){
        o = w%m;
        p = w/m;
        count = count+p;
        w = o+p;
    }
    return count;
}
