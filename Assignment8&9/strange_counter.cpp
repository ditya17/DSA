long strangeCounter(long t) {
    long x = 2,i=3;
    if (t == 1) return 3;
    if (t == 2) return 2;
    if (t == 3) return 1;
    if (t == 4) return 6;
    if (t == 5) return 5;
    while (x<t){
        x= x+i;
        i = i*2;
    }
    long count = x - (i/2);
    long value  = count;
    if (t == count) return t;
    for (long j = count + 1;j<=t;j++){
        value--;
    }
    return value;
}
