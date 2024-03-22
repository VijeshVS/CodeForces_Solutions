#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n;
   cin>>n;

   vector<int> a(n);

   for(int i = 0;i<n;i++){
    cin>>a[i];
   }

   for(int i = 1;i<n-1;i++){
        while(a[i-1] > 0){
            a[i] -= 2;
            a[i-1] -= 1;
            a[i+1] -= 1;
        }
   }

   for(int i = 0;i<n;i++){
        if(a[i] != 0){
            cout<<"NO"<<endl;
            return;
        }
   }

   cout<<"YES"<<endl;
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