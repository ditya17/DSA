int hurdleRace(int k, vector<int> height) {
    int max = height[0];
    for (int i =1;i<height.size();i++){
        if (height[i]>max) max = height[i];
    }
    if (max < k) return 0;
    return max - k;
}
