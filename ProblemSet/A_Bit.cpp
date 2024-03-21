#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

   int n;
   cin>>n;

    vector<string> a(n);
    int count = 0;

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0;i<n;i++){
        if(a[i][0] == '-' || a[i][1] == '-'){
            count--;
        }
        else{
            count++;
        }
    }

    cout<<count<<endl;
}