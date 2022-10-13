int countingValleys(int steps, string path) {
    int count=0, up =0, down =0;
    for (int i =0;i<path.size();i++){
        if (up == 0 && down == 0 && path[i] == 'D') {
            count++;
            down++;
        }
        else if (up != 0 && path[i] == 'D'){
            up--;
        }
        else if (down != 0 && path[i] == 'U'){
            down--;
        }
        else if (path[i] == 'U'){
            up++;
        }
        else if (path[i] == 'D'){
            down++;
        }
    }
    return count;
}
