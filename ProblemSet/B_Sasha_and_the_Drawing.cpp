#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   long long n,k;

   cin>>n>>k;

   long long t_d = (4*n) - 2;

   int ans = t_d/k;

   cout<<ans<<endl; 
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