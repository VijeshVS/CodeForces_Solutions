#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin>>s;
    map<char,int> mpp;

    for(auto i:s){
        mpp[i]++;
    }

    int count = 0;

    for(auto i:mpp){
        count++;
    }

    if(count % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}