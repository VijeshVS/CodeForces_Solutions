#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int n,k;
    cin>>n>>k;

    vector<int> a(n);

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    int limit = a[k-1];

    int ans = 0;
    for(int i = 0;i<n;i++){
        if(a[i] > 0 && a[i]>=limit)
            ans++;
    }

    cout<<ans<<endl;
    
}