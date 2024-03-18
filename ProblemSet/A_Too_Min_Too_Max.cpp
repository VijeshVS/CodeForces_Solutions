#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n;
   cin>>n;

   vector<int> a(n);

   for(int i =0;i<n;i++){
        cin>>a[i];
   }

   sort(a.begin(),a.end());
   cout<< 2*(a[n-1] - a[0]) + 2*(a[n-2]-a[1])<<endl;

}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}