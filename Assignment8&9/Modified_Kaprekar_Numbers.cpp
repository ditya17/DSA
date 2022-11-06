void kaprekarNumbers(int p, int q) {
    int n,m;
    long long x;
    vector<int>z;
    string s,t,u="",v="";
    for (int i = p;i<=q ;i++){
        s = to_string(i);
        x = pow(i,2);
        t = to_string(x);
        if (t.size() == 1) u = "0";
        for (int j=0;j<t.size()-s.size();j++){
            u = u+t[j];
        }
        for (int j =t.size()-s.size();j<t.size();j++ ){
            v = v+t[j];
        }
         n = stoi(u);
         m = stoi(v);
        u ="";
        v ="";
        if (n+m == i) z.push_back(i);
    }
    if (z.size()>= 1){
        for (int i=0;i<z.size();i++) 
        cout<<z[i]<<" ";
    }
     else cout<<"INVALID RANGE";
}
