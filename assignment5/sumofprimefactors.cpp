#include<bits/stdc++.h>
using namespace std;
#define int long long

int factors(int n){
    vector<int>B;
    vector<bool>isPrime(n,1);
    for(int i=2;i<=n;i++){
        if(!isPrime[i] ) continue;
          if (n%i == 0){
          B.push_back(i);
          n = n/i;
          }
        for(int j=i*i;j<n;j+=i) isPrime[j]=0;
    }
    int sum =0;
    for (int i =0;i<B.size();i++){
        sum= sum+B[i];
    }
    cout<<sum;
    return 0;
}

signed main(){
    int n;
    cin>>n;
    factors(n);
}
