#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin>>n;

   string a,b,c;

   cin>>a>>b>>c;
    
    for(int i = 0;i<n;i++){
        if(a[i] == b[i] && a[i] == c[i]){
            cout<<"NO"<<endl;
            return;
        }
        else if((a[i]==c[i] && a[i]!=b[i]) || (b[i] == c[i] && a[i] != b[i])){
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