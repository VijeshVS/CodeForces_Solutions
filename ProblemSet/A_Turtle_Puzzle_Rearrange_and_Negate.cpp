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

    long long sum = 0;

    for(int i = 0;i<n;i++){
        sum += abs(a[i]);
    }

    cout<<sum<<endl;
}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}