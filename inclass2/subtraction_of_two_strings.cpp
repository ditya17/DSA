bool compare(string a,string b){
    int i=0; 
    int j=0;
    while(i<a.size() && a[i]=='0') i++;
    while(j<b.size() && b[j]=='0') j++;
    
    if ((a.size()-i)>(b.size()-j))    return 1;
    else if ((a.size()-i)<(b.size()-j))    return 0;
    else {
        while(i<a.size()){
            if(a[i]>b[j]) return 1;
            if(a[i]<b[j]) return 0;
            i++; j++;
        }
    }
    return 1;
}

string subtract(string a,string b){
    string d = "0123456789";
    string c ="";
    bool abc = compare (a,b);
    if(!abc) swap(a,b);
        int i = a.size()-1;
        int j = b.size()-1;
        while (i>=0 && j>=0){
            if ((a[i]-'0')>=(b[j]-'0')) {
               int z = (a[i]-'0')-(b[j]-'0');
                c = c+ d[z];
            }
            else{
                int z = ((a[i]-'0')+10)-(b[j]-'0');
                a[i-1] = ((a[i-1]-'0')-1)+'0';
                c = c+ d[z]; 
            }
          i--,j--;
        }
        while (i>=0){
            c = c+a[i];
            i--;
         }
    if(!abc)  c=c+'-' ;
    reverse(c.begin(),c.end());
    cout<<c;
    return c;
}

int main(){
    string a,b;
    cin>>a>>b;
    subtract(a,b);
}
