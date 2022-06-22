void recursion(string X ){
     if (X.size()<3)
       cout<<X<<endl;
     if (X.size()==3) 
    {
        cout<<X<<endl;
        return;
    }
    
    for (char a = 'a';a<='c';a++){
        recursion(X+a);   
    }
}

int main(){
    string X="";
    recursion(X);
}
