#include<bits/stdc++.h>
using namespace std;

void printarray(vector<int>A){
   for (int a : A) cout<<a<<" "; 
   cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>A(n);
    for (int i =0;i<n;i++){
        cin>>A[i];
    }
    int a = A[n-1];
    for (int i = n-2;i>=0;i--){
         if (A[i]>a){
         A[i+1] = A[i];
         printarray(A);
         if (i == 0 && A[0]>a){
                A[i+1] = A[i];
                A[i] = a;
                printarray(A);
            }
        }
    else {
        A[i+1] = a;
        printarray(A);
        break;
    }
    }
}
