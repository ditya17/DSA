vector<int> gradingStudents(vector<int> grades) {
    int x;
    for (int i =0;i<grades.size();i++){
        x = grades[i]%10;
        if (grades[i]>37 && x <= 5 && x >2 ) {
            grades[i] = grades[i] + (5-x);
        }
        else if (grades[i]>37 &&x <= 10 && x >7 ) {
            grades[i] = grades[i] + (10-x);
        }
        
    }
    return grades;
}
