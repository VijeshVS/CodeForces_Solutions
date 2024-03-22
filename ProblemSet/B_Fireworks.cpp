#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    long long a,b,m;

    cin>>a>>b>>m;

    cout<< m/a + m/b + 2 <<endl;
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