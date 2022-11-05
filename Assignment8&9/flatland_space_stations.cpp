int flatlandSpaceStations(int n, vector<int> c) {
    sort(c.begin(), c.end());
    vector<int>x;
    x.push_back(c[0] -0);
    x.push_back(n-1 - c[c.size()-1]);
    for (int i =0;i<c.size()-1;i++){
        x.push_back(c[i+1] - c[i]);
    }
    int k = x[2];
    for (int i =2;i<x.size();i++){
        if (x[i]>k) k = x[i];
    }
    if (k/2 <= x[0] || k/2 <= x[1]){
        if (x[0]>x[1]) return x[0];
        else return x[1];
    }
    sort(x.begin(), x.end());
    return (x[x.size()-1])/2;
}
