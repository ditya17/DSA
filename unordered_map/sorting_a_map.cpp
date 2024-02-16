// making a comparator for comparing pair based on first value of pair
int cmp(pair<int,int>a, pair<int,int>b){
    return a.first<b.first;
}

int main() {
    
    unordered_map<int,int>mp;
    
    mp.insert({1,5});
    mp.insert({7,4});
    mp.insert({6,3});
    mp.insert({3,5});
    mp.insert({8,7});
    mp.insert({0,1});

    // converting map into vector of pairs
    vector<pair<int,int>>v(mp.begin(),mp.end());

  // sorting the vector of pairs using comparator 
    sort(v.begin(),v.end(), cmp);
    
    for (int i = 0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
