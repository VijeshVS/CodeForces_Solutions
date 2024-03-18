#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ans = 0;
    int cnt = 0;

    for(int i = 0;i<n;i++){
        ans += (s[i] == '@');

        cnt += (s[i] == '*');
        if(cnt == 2) break;

        if(s[i] == '.' || s[i] == '@') cnt = 0;
    }

    cout<<ans<<endl;
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