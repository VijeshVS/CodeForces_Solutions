#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    string str;
    cin>>n>>str;

    vector<int> prefix(n,0);
    vector<int> suffix(n,0);

    set<int> s;

    for(int i = 0;i<n;i++){
        s.insert(str[i]);
        prefix[i] = s.size();
    }
    s.clear();

    for(int i = n-1;i>=0;i--){
        s.insert(str[i]);
        suffix[i] = s.size();
    }

    int maxi = 0;

    for(int i = 0;i<n-1;i++){
        int sum = prefix[i] + suffix[i+1];

        maxi = max(maxi,sum);
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