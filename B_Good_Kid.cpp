#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin>>n;

    vector<int> a(n,0);

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    long long maxi = 0;

    for(int i = 0;i<n;i++){
        long long temp = a[i]+1;
        for(int j = 0;j<n;j++){
            if(j == i) continue;
            temp *= a[j];
        }
        maxi = max(maxi,temp);
    }

    cout<<maxi<<endl;
}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}