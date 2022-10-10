int pickingNumbers(vector<int> a) {
    vector<int>z(100,0);
    for (int i =0;i<a.size();i++){
        z[a[i]]++;
    }
    int max =0;
    for ( int j =0;j<z.size()-1;j++){
        if ((z[j] + z[j+1]) > max) max =  (z[j] + z[j+1]);
    }
    return max;
}
