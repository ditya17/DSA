int main(){
    int n,m;
    cin>>n;
    m = n;
    vector<int>a(2*n-1, 0);
    vector<vector<int>>b(2*n-1, a);
    for (int i = 0;i<n;i++){
        for (int j = i;j<(2*n-1)-i;j++){
            b[i][j] = m;
            b[2*n-1-1-i][j] = m;
        }
        for (int k = i; k<(2*n-1)-i;k++){
            b[k][i] = m;
            b[k][2*n-1-1-i] = m;
        }
        m--;
    }
    for (int i = 0;i<b.size();i++){
        for (int j = 0;j<b[i].size();j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
