#include<bits/stdc++.h>
using namespace std;

vector<int>C;
vector<vector<int>>m3;
void matrix_multi(vector<vector<int>>m1 , vector<vector<int>>m2){
     int m,n,o,p;
     cin>>m>>n>>o>>p;
      for (int i = 0;i<m;i++){
           for (int j=0;j<n;j++)
               cin>>m1[i][j];
        }
      for (int i = 0;i<o;i++){
           for (int j=0;j<p;j++)
               cin>>m2[i][j];
        }
       for (int i = 0;i<m;i++){
           for (int j=0;j<n;j++){
               m3[i][j]=0;
               for (int k=0;k<p;k++){
                   m3[i][j] = m3[i][j] + (m1[i][k])*(m2[k][j]);
               }
               }         
        }
      for (int i = 0;i<m;i++){
           for (int j=0;j<p;j++)
               cout<<m3[i][j];
         cout<<endl;
        }
}

int main(){
   int m,n,o,p;
   cin>>m>>n>>o>>p;
   
    vector<int>A(n);
    vector<int>B(p);
    vector<int>C(p);
    vector<vector<int>>m3(m,C);
    vector<vector<int>>m1(m,A);
    vector<vector<int>>m2(o,B);
    for (int i = 0;i<m;i++){
           for (int j=0;j<n;j++)
               cin>>m1[i][j];
        }
      for (int i = 0;i<o;i++){
           for (int j=0;j<p;j++)
               cin>>m2[i][j];
        }
    if (n==o){
       m3 = matrix_multi(m1 , m2);
       for (int i = 0;i<m;i++){
           for (int j=0;j<p;j++)
               cout<<m3[i][j]<<" ";
         cout<<endl;
        }
    }
    else {
        cout<<"matrix multiplication not possible";
    }
    
}
