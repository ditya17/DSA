vector<int> cutTheSticks(vector<int> arr) {
    vector<int>x;
    int y =0;
    x.push_back(arr.size());
    sort(arr.begin(),arr.end());
    int z = arr[0];
    int i =0;
    while (i<arr.size()-1){
        if (arr[i] == arr[i+1]) {
            i++;
            continue;
        }
        arr[i] = z;
        arr[arr.size()-1] = arr[arr.size()-1] - arr[i];
        if (arr[arr.size()-1] == 0) return x;
        y = y + arr[i];
        z = arr[i+1] -y;
        i++;
        x.push_back(arr.size() - i );
    }
    return x;
}
