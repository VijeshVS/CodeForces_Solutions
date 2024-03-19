#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n;
   cin>>n;

    int size = 26;
    string bruh = "zzz",curr;

    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            for(int k = 0;k<size;k++){
                if(i+j+k+3 == n){
                    curr = "";
                    curr += char('a'+i);
                    curr += char('a'+j);
                    curr += char('a'+k);
                    bruh = min(bruh,curr);
                }
            }
        }
    }

    cout<<bruh<<endl;
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