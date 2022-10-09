int birthday(vector<int> s, int d, int m) {
    int sum =0;
    int count=0;
    for (int i =0;i<m;i++){
        sum = sum+ s[i];
    }
    if (sum == d) count++;
    int x = m;
    for (int j =0;j<s.size()-m;j++){
        sum = sum - s[j] + s[x];
        x++;
        if (sum == d) count++;
    }
    return count;
}
