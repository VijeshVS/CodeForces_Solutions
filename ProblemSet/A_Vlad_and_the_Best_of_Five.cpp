#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    string s;
    cin>>s;
    int cta = 0;
    int ctb = 0;

    for(int i = 0;i<s.length();i++){
        if(s[i] == 'A')
            cta++;
        else
            ctb++;
    }

    if(cta>ctb){
        cout<<'A'<<endl;
    }
    else
        cout<<'B'<<endl;
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