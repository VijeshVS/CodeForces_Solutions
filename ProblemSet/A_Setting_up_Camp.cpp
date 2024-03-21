#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int a,b,c;

    cin>>a>>b>>c;
    int ans = a;
    ans += b/3;

    int rem_b = b % 3;
    int needed = 3 - rem_b;

    if(c < needed && rem_b!=0){
        cout<<-1<<endl;
        return;
    }

    ans += (c+rem_b)/3;

    int rem_c = (c+rem_b) % 3;

    if(rem_c > 0){
        ans += 1;
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