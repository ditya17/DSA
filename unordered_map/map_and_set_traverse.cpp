int main() {
    unordered_map<int,int>mp;
    int x;
    for (int i = 0;i<6;i++){
        cin>>x;
        mp.insert({i,x});
    }
    
    // how we traverse a map
    for (auto i = mp.begin();i!= mp.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }


    // how we iterate a set
    unordered_set<int>ans;
    ans.insert(1);
    ans.insert(2);
    
    for (auto i = ans.begin();i!=ans.end();i++){
        cout<<(*i)<<" ";
    }
}
