#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,m;
   cin>>n>>m;
   int y[n][m];
   int sum =0;
    for (int i =0; i<n; i++ ){
        for (int j=0;j<m; j++){
            cin>>y[i][j];
        }
    }
    for (int i =0;i<n;i++){
        for (int j=0;j<m; j++){
            cout<<y[i][j]<<" ";
            sum = sum + y[i][j];
        }
    cout<<endl;
    }
    cout<<sum;
}
