#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    long long n;
    cin>>n;
    int maxi = 0;
    int count = 0;

    for(int i = 1;i<=100;i++)
    {
        if(n%i == 0){
            count++;
        }
        else 
            break;
    }

    cout<<count<<endl;
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