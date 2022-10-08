void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int app=0, orr=0;
    int x, y;
    for (int i=0;i<apples.size();i++){
         x = apples[i] + a ;
        if ( x>=s && x<=t) app++;
    }
    for (int i=0;i<oranges.size();i++){
         y = b + oranges[i]  ;
        if ( y>=s && y<=t) orr++;
    }
    cout<<app<<endl<<orr;
}
