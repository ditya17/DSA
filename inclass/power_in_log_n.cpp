int power(int a, int x){
    int temp;
	int b = 1000000007;
    if (x == 1) return a;
    if (x == 0 ) return 1;
     temp = power(a,x/2);
    if (x%2 == 0 ){
        return ((temp%b)*(temp%b))%b;
    }
    else {
         return ((a%b)(temp%b)(temp%b))%b;
    }
}
