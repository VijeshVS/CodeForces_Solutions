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

    for(int i =0;i<n;i++){
        sum += a[i];
    }

    if(sum % 3 == 0){
        cout<<0<<endl;
        return;
    }

    if( (sum + 1) % 3 == 0)
    {
        cout<<1<<endl;
        return;
    }

    if((sum+2) % 3 == 0){
        for(int i = 0;i<n;i++){
            if((sum  - a[i]) % 3 == 0){
                cout<<1<<endl;
                return;
            }
        }

        cout<<2<<endl;
    }
    
}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}