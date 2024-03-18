#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    vector<int> v;

    v.push_back(a[n-1]);
    a.pop_back();

    while(a.size()){
        if(v.back() >= a.back()){
            v.push_back(a.back());
        }
        else{
            int n1 = a.back()%10;
            int n2 = a.back()/10;
            v.push_back(n1);
            v.push_back(n2);
        }
        a.pop_back();
    }

    bool flag = true;

    for(int i = 1;i<v.size();i++){
        if(v[i-1] < v[i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main(){
    (ios::sync_with_stdio(false), cin.tie(NULL));

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}