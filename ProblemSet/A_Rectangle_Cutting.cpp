#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int a,b;
    cin>>a>>b;

    if(a>b){
        swap(a,b);
    }

    if((a%2 == 1 && b%2 == 1) || (a%2 == 1 && b == 2*a)){
        cout<<"No"<<endl;
    }
    else
        cout<<"Yes"<<endl;


    
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