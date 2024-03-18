#include <iostream>
#include <bits/stdc++.h>

using namespace std;


string rev(string s){
    int i = 0;
    int j = s.length()-1;

    while(j>i){
        swap(s[i++],s[j--]);
    }

    return s;
}

void solve(){
   int n;
   cin>>n;

   string s;
   cin>>s;

   int size = s.length();

    string p = rev(s) + s;

    cout<<min(p,s)<<endl;

}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}