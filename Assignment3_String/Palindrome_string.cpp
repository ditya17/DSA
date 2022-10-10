//not accepted for large values

Solution::isPalindrome(string A) {
    A.erase(remove(A.begin(), A.end(), ' '), A.end());
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    string B = "";
    for (int i =0;i<A.size();i++){
        if (isalnum(A[i])){
            B= B+ A[i];
        }
    }
    int i =0, j = B.size()-1;
    while (i<= B.size()/2 ){
        if (B[i] != B[j] ) return 0;
        i++;
        j--;
    }
    return 1;
}
