#include <bits/stdc++.h>
using namespace std; 

int main(){ 
    int a[1000];
    long sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    for(int i=0;i<n;i++){ 
        sum=sum+a[i]; 
    } 
    cout<<sum;
     }
