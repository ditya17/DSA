//         # 
//       # # # 
//     # # # # # 
//   # # # # # # # 
// # # # # # # # # # 
// pattern for n = 5

//     # 
//   # # # 
// # # # # # 
// pattern for n =3




int main() {
    int n;
    cin>>n;
    for (int i =0;i<n;i++){
        for (int j = (2*n)-2*(i+1); j>0;j--) {
            cout<<" ";
        }
        for (int k = 0;k<2*i+1;k++){
            cout<<"# ";
        }
        cout<<endl;
    }
}
