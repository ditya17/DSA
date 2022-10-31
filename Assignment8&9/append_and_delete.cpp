string appendAndDelete(string s, string t, int k) {
     int i =0, j=0;
     while (i<s.size() && j<t.size()){
         if (s[i] == t[j]){
             i++;
             j++;    
         }
         else break;
     }
     if (i == s.size() && j == t.size()) return "Yes";
     int m = s.size() - i ;
     int n = t.size()- j ;
     int count = m + n;
     if ((count <= k && ((k-count)%2 == 0)) || (s.size() + t.size()) <= k  ) return "Yes";
    return "No";
}
