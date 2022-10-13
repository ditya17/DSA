// not passing testcase

string Solution::solve(string A) {
    string x = "";
    string y = "";
    for ( int i = A.size()-1;i>=0;i--){
        if (A[i] == ' ' && A[i+1] == ' ') continue;
        if (A[i] != ' '){
            x = A[i] + x;
        }
        else {
            
                y = y + " " + x;
                x = "";
            
        }
          if ( i == 0 && A[i] != ' ') {
            y = y + " " + x;
          }
    }
    y.erase(0,1);
    return y ;
}
