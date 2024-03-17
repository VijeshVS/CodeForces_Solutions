#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin>>n;

    int x = log2(n);
    int ans = pow(2,x);

    cout<<ans<<endl;

}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}