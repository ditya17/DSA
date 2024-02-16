int main() {
    
   // how to declare a pair
   pair<int,char>a(1,'b');
   pair b('c', 5);
   pair c = {3, 'z'};
    
   cout<<a.first<<" "<<a.second<<endl;
   cout<<b.first<<" "<<b.second<<endl;
    
    // how to make vector of pair
    vector<pair<int,char>>v;
    v.push_back(a);
    v.push_back(c);
    cout<<v[1].first<<" "<<v[1].second;
}
