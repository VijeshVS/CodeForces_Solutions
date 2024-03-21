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

   int l = -1;
   int h = -1;

   for(int i =0;i<n;i++){
    if(a[i] == 1)
        {
            l = i;
            break;
        }
   }

   for(int i = n-1;i>=0;i--){
        if(a[i] == 1){
            h = i;
            break;
        }
   }

   if(h == l){
    cout<<0<<endl;
    return;
   }

    int ans = 0;
    for(int i = l ;i<=h;i++){
        if(!a[i])
            ans++;
    }

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