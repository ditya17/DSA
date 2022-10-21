int designerPdfViewer(vector<int> h, string word) {
    int max =0;
    int x;
    for (int i =0;i<word.size();i++){
        x = word[i] - 'a';
        if (h[x]>max ) max = h[x];   
    }
    int y = word.size();
    return max*y;
}
