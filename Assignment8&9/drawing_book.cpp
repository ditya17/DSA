int pageCount(int n, int p) {
    int a = p-1;
    int b;
    if (n%2 == 0)
        b = n-p;
    else b = n-p-1;
    int c = 0;
    if (a<=b){
        c = p/2;
    }
    else {
        if (n%2 ==0){
            c = (n-p +1)/2;
        }
        else {
            c = (n-p)/2;
        }
    }
    return c;
}
