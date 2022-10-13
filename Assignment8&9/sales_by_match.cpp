int sockMerchant(int n, vector<int> ar) {
    int count=0;
    vector<int>b(101,0);
    for (int i =0;i<ar.size();i++){
        b[ar[i]]++;
    }
    for (int i =0;i<b.size();i++){
        count = count + b[i]/2;
    }
    return count;
}
