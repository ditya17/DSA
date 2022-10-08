vector<int> breakingRecords(vector<int> scores) {
    int min =0,max =0;
    int minscore = scores[0] , maxscore = scores[0];
    for (int i =1;i<scores.size();i++){
        if (scores[i]>maxscore) {
            maxscore = scores[i];
            max++;
        }
        else if (scores[i]<minscore) {
            minscore = scores[i];
            min++;
        }
    }
    return {max,min};
}
