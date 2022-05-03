#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int e,f,max;
    if (a>b){
        e = a;
    }
    else {
        e =b;       
    }
    if (c>d){
        f = c;
    }
    else {
        f =d;
    }
    if (e>f){
        max =e;
    }
    else {
        max = f;
    }
    return max;
} 

int main(){
int z,p,q,r,s;
cin>>p;
cin>>q;
cin>>r;
cin>>s;
z = max_of_four(p, q, r, s);
cout<<z;
}
