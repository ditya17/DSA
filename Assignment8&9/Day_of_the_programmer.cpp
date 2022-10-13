string dayOfProgrammer(int year) {
    string x = to_string(year);  
    if (year == 1918 ) return "26.09.1918";
    if (year<=1917) {
        if (year%4 == 0) return "12.09." + x;
        else return "13.09." + x;
    }
    if (year>=1919){
        if (year%400 ==0 || (year%4 ==0 && year%100 != 0)) return "12.09." + x;
        else return "13.09." + x;
    }
    return "z";
}
