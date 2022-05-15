#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int>A){
    for (int a : A) cout<<a<<" "; 
    cout<<endl;
}

vector<int> countingSort(vector<int> arr) {
    vector<int>A( 100, 0);
     for( int a:arr){
           A[a] = A[a] + 1;
      }
     printarray(A);
    return A;
}

int main(){
    int n;
    cin>>n;
    vector<int>B(n);
    for (int i=0;i<n;i++){
        cin>>B[i];
    }
    countingSort(B);
}
