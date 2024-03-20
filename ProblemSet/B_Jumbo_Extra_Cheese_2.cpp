#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve(){
   int n;
   cin>>n;

   vector<long long> a(n),b(n);

   ll maxi = 0;
   ll sum = 0;

   for(int i = 0;i<n;i++){
        cin>>a[i]>>b[i];

        maxi = max(maxi,max(b[i],a[i]));
        sum += 2*min(a[i],b[i]);
   }

   sum += maxi*2;

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