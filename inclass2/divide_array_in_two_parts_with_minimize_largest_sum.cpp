//divide in 2 parts with minimize the largest sum

#include<bits/stdc++.h>
using namespace std;

vector<int>subarrays(vector<int>A){
    vector<int>B;
    int sum =0;
    for (int i=0;i<(A.size());i++){
        sum = sum+A[i];
    }
    int b;
    int a = 0;
    for (int j=0;j<(A.size()-1);j++){
        a = a + A[j] ;
        b = sum - a;
        if (a>b) B.push_back(a);
        else B.push_back(b);
    }
    int min = B[0];
    int x;
    for (int i =1;i<B.size();i++){
        if (B[i]<min) {
            min = B[i] ;
            x = i;
        }
    }
    cout<<x<<endl;
    for (int i =0;i<=x;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for (int i =x+1;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    return B;
}

int main(){
    vector<int>A;
    int p, n;
    cin>>n;
    for(int i =0;i<n; i++){
        cin>>p;
        A.push_back(p);
    }
    subarrays(A);
}
