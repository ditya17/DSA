
long taumBday(int b, int w, int bc, int wc, int z) {
    long long x,y,t,v,c,d;
    if (bc == wc || abs(bc-wc) <=z) {
        c=b;
        d = w;
        x = c*bc;
        y = d*wc;
        t = x+y;
    }
    else if (bc>wc){
        c=b;
        d = w;
        v = wc+z;
        x = c*v;
        y = d*wc;
        t = x+y;
    }
    else {
        c=b;
        d = w;
        v = bc+z;
        x = c*bc;
        y = d*v;
        t = x+y;
    }
    return t;
}
