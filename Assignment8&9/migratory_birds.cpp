int migratoryBirds(vector<int> arr) {
    vector<int>z(6,0);
    for (int i =0;i<arr.size();i++){
        z[arr[i]]++;
    }
    int count =0,max =0;
    for (int i =0;i<z.size();i++){
        if (z[i]>count){
            count = z[i];
            max = i;
        }
    }
    return max;
}
