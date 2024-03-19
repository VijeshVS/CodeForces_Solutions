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
    int sum = 0;

   for(int i = 0;i<n;i++){
        sum += a[i];
   }

   sum = sum/n;

   for(int i = 0;i<n;i++){
        if(a[i] >= sum){
            int e = a[i]-sum;
            if(i<n-1){
                a[i+1] += e;
            }
        }
        else{
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