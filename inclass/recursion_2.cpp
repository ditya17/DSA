void repetition(string b="",string X="abc"){
    if (b.size()==3) 
    {
        cout<<b<<endl;
        return;
    }
    for (char a:X){
        repetition(b+a,X);
    }
}

int main() {
    string a;
    cin>>a;
    repetition("",a);
}
