long repeatedString(string s, long n) {
    long  count =0, c =0;
    long y = n/s.size();
    long x = n%s.size();
    for (int i =0;i<s.size();i++){
        if (s[i] == 'a') count++;
    }
    for (int i=0;i<x;i++){
        if (s[i] == 'a') c++;
    }
    return (count*y) + c;
}
