#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   string s;
   cin>>s;

   char ch = s[0];
   int num = (int)s[1];

   for(int i = 0;i<8;i++){
        char l = 'a'+ i ;
        string b = "";
        b += l;
        b += s[1];
        if(l != s[0]){
            cout<<b<<endl;
        }
   }
    int k = num;

   for(int i = 0;i<8;i++){
        if(i == num-'1') continue;
        string b = "";
        b += s[0];

        
        cout<<b<<i+1<<endl;
        
   }
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