int reverse(int x){
    int z =0 , m , n;
    while (x>0){
        m = x%10;
        z = z*10 + m;
        x = x/10;
    }
    return z;
}
int beautifulDays(int i, int j, int l) {
    int count =0;
    int m;
    for (int k =i;k<j+1;k++){
        m = reverse(k);
        if ((k - m) % l ==0) count++;
    }
    return count;
}
