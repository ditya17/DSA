vector<string> cavityMap(vector<string> grid) {
    string s,t,u;
    for (int i = 1;i<grid.size()-1;i++){
        s = grid[i];
        t = grid[i-1];
        u = grid[i+1];
        for (long j =1;j<s.size()-1;j++){
            if ( (s[j] - '0' > s[j+1] - '0' ) && (s[j] - '0' > s[j-1] - '0' ) &&  s[j] - '0' > t[j] - '0' && s[j] - '0' > u[j] - '0' ) s[j] = 'X';
        }
        grid[i] = s;
    }
    return grid;
}
