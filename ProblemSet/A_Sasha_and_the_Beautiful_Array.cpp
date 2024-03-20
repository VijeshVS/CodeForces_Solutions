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

   sort(a.begin(),a.end());

   long long sum = 0;

   for(int i = 1;i<n;i++){
    sum += a[i] - a[i-1];
   }

   cout<<sum<<endl;
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