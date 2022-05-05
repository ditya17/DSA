#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int max = 0;
    if(max<a){
        max = a;
    }
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }
    if(max<d){
        max = d;
    }
    return max;
}

int main(){
int z,p,q,r,s;
cin>>p>>q>>r>>s;
z = max_of_four(p, q, r, s);
cout<<z;
}
