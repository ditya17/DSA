int jumpingOnClouds(vector<int> c) {
    int count =0;
    int i =0;
    while (i<c.size()-1){
        if (c[i+2] != 1) {
            i= i+2;
            count++;
            cout<<i<<" "<<count<<endl;
        }
        else {
            i++;
            count++;
            cout<<i<<" "<<count<<endl;
        }
    }
    return count;
}
