vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int>x;
    
    if (k > a.size()) k = k%a.size();
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());
    
    for (int i =0;i<queries.size();i++){
        x.push_back(a[queries[i]]);
    }
    
    return x;
}
