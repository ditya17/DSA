#include<bits/stdc++.h>
using namespace std;

// using pre defined function string(_ , _)

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1;i<=n;i++){
//         cout<<string(i,'#');
//         cout<<endl;
//     }
// }

//without predefined function
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j = 1;j<=i;j++){
            char a = '#';
            cout<<a;
        }
        cout<<endl;
    }
}
