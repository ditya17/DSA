int Solution::romanToInt(string A) {
    unordered_map<char,int>mp;
    mp.insert({'M' , 1000});
    mp.insert({'D', 500});
    mp.insert({'C', 100});
    mp.insert({'L', 50});
    mp.insert({'X', 10});
    mp.insert({'V', 5});
    mp.insert({'I', 1});
    int count =0;
    for (int i =0;i<A.size();i++){
        count = count + mp[A[i]] ;
        if ( mp[A[i-1]] < mp[A[i]] ){
            count = count - mp[A[i-1]] ;
            count = count - mp[A[i]] ;
            count = count + (mp[A[i]] - mp[A[i-1]]);
        }
    }
    return count;
}
