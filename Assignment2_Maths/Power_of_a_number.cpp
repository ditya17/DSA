//function to find power of a number

int power(int a, int n){
    if (n == 0) return 1;
    if (n == 1) return a;
    
    int x = power (a,n/2);
    if (n%2 ==0 ) return x*x;
    else return a*x*x;
}
int main(){
    int a, n;
    cin>>a>>n;
    int z = power(a,n);
    cout<<z;
}
