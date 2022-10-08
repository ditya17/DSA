int getTotalX(vector<int> a, vector<int> b) {
    int x = a[a.size()-1];
    int z = x;
    vector<int>c;
    int count=0,i=1;
    while (x<=b[0]){
        x = z;
        x = x*i;
        if (x<=b[0]){
        c.push_back(x);
        }
        i++;
    }
    int l =0,j=0,k=0;
    for (;j<c.size();j++){
        l =0;
        k =0;
        for (;l<a.size();l++){
            if (c[j]%a[l] != 0) break;
        }
        if (l != a.size()) continue;
        for (;k<b.size();k++){
            if (b[k]%c[j] != 0) break;
        }
        if (k == b.size()) count++;
    }
    return count;
}
