int main() {
    unordered_map<int,int>mp;
    int x;
    for (int i = 0;i<6;i++){
        cin>>x;
        mp.insert({i,x});
    }
    
    // converts map into vector of pairs
    vector<pair<int,int>>v(mp.begin(), mp.end());
  
    for (auto i = 0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
