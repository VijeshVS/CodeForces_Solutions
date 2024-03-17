#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n,m;
   cin>>n>>m;

   int k;
   cin>>k;

   vector<int>b(n,0);
   vector<int>c(m,0);

   for(int i = 0;i<n;i++){
    cin>>b[i];
   }

    for(int i = 0;i<m;i++){
    cin>>c[i];
   }
    int count = 0;


    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(b[i] + c[j] <=k){
                count++;
            }
        }
    }

    cout<<count<<endl;


}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}