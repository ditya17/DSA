int Solution::isPalindrome(string s) {
    int i=0, j= s.size()-1;
    while(i<j){
        if(!isalnum(s[i])){
            i++;
            continue;
        }
        if(!isalnum(s[j])){
            j--;
            continue;
        }
        
        s[i] = tolower(s[i]);
        s[j] = tolower(s[j]);
        if(s[i]!=s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

