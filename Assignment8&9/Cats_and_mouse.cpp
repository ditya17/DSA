string catAndMouse(int x, int y, int z) {
    int a = abs(x-z);
    int b = abs(y-z);
    if (a>b) return "Cat B";
    if (b>a) return "Cat A";
    else return "Mouse C";
}
