#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n,m,k;

   cin>>n>>m>>k;

   cout<<(n^m^k)<<endl;
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}