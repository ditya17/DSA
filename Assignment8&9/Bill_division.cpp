void bonAppetit(vector<int> bill, int k, int b) {
    int sum =0;
    for (int i =0;i<bill.size();i++){
        sum = sum + bill[i];
    }
    sum = sum - bill[k];
    sum = sum/2;
    if (sum - b == 0) cout<<"Bon Appetit";
    else cout<< b - sum;
}
