#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    string k = "hello";
    string s;
    cin>>s;

    int kp = 0;

    for(auto i:s){
        if(i == k[kp]){
            kp++;
        }

        if(kp == k.length()){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
}