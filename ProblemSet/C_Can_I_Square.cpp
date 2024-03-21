#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n;
   cin>>n;
   vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

   long long sum = 0;
    
   for(int i = 0;i<n;i++){
        sum+=a[i];
   }

   long long x = sqrt(sum);

   if ( x*x == sum){
        cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;

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
