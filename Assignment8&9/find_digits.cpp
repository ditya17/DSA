int findDigits(int n) {
    int x = n , m;
    int count =0;
    while (x>0){
        m = x%10;
        x = x/10;
        if (m == 0) continue;
        if (n%m == 0) count++;
    }
    return count;
}
