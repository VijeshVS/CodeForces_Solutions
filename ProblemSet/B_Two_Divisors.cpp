#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   long long n,m;
   cin>>n>>m;

   for(long long i = 2;i<=100;i++){
        if((m*i) % n == 0 ){
            cout<<m*i<<endl;
            break;
        }
   }

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