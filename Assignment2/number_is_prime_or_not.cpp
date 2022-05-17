#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
     if (n<=1){
        return false;
    }
    else
       for (int i=2;i<=sqrt(n);i++){
           if (n%i==0){
               return false;
           }
       }
    return true;
              
}
int main() {
    int p;
    cin>>p;
    if ( isprime(p)==true ){
        cout<<"prime";
    }
    else {
        cout<<"not prime";
    }
}
