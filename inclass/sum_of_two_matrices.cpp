#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,m;
   cin>>n>>m;
   int y[n][m];
   int z[n][m];
   int x[n][m];
    for (int i =0; i<n; i++ ){
        for (int j=0;j<m; j++){
            cin>>y[i][j];
        }
    }
    for (int k =0; k<n; k++ ){
        for (int l=0;l<m; l++){
            cin>>z[k][l];
        }
    } 
    for (int f =0; f<n; f++ ){
        for (int g=0;g<m; g++){
            x[f][g] = y[f][g] + z[f][g];
            cout<<x[f][g]<<" ";
        }
    cout<<endl;       
    }
}
