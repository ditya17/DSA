string Solution::solve(string A) {
    string x = "" , y ="";
    if (A.size() == 1) return A;
    for ( int i = A.size()-1;i>=0;i--){
        if (A[i] == ' ' && A[i+1] == ' ') continue;
        if (A[i] != ' ')  x = A[i] + x;
        else {
                y = y + " " + x;
                x = ""; 
        }
          if ( i == 0 && A[i] != ' ')  y = y + " " + x;
    }
    int k =0;
    while (k<y.size() && y[k]==' ') k++;
    y.erase(0,k);
    
    return y ;
}
