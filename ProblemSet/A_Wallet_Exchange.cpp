#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n,m;
   cin>>n>>m;
    string s = abs(n-m) % 2==0 ?"Bob":"Alice";
    
   cout<<s <<endl;
}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}