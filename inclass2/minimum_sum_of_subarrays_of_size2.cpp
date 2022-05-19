//minimum sum of subarrays of size 2

#include<bits/stdc++.h>
using namespace std;

vector<int>min_sum(vector<int>A){
    vector<int>B;
    int p;
    for (int i =0;i<(A.size() -1);i++){
        p = A[i] + A[i+1];
        B.push_back(p);
    }
    int min = B[0];
    for (int i =1;i<B.size();i++){
        if (B[i]<min) min = B[i];
    }
    cout<<min<<" ";
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
    min_sum(A);
}
