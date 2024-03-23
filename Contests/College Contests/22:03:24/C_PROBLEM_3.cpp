#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    long long n;

    cin>>n;

    if(n<4){
        cout<<-1<<endl;
        return;
    }

    if(n == 4){
        cout<<1<<" "<<1<<endl;
        return;
    }

    if(n == 6){
        cout<<1<<" "<<1<<endl;
        return;
    }

    if(n %2 != 0){
        cout<<-1<<endl;
        return;
    }

    if(n%4 == 0 && n%6 == 0){
        cout<<n/6<<" "<<n/4<<endl;
        return;
    }

    long long f = n/4;
    long long s = n/6;
    long long rf = n%4;
    long long sf = n%6;

    if(rf == 2 && sf == 4){
        cout<<n/6+1<<" "<<n/4<<endl;
        return;
    }

    if(rf == 2 && sf == 2){
        cout<<n/6+1<<" "<<n/4<<endl;
        return;
    }

    if(rf == 0){
        cout<<n/6+1<<" "<<n/4<<endl;
        return;
    } 

    if(sf == 0){
        cout<<n/6<<" "<<n/4<<endl;
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