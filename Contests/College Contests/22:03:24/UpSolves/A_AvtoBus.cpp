#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    long long n;
    cin>>n;

    if(n == 2){
        cout<<-1<<endl;
        return;
    }

    if(n%2 != 0){
        cout<<-1<<endl;
        return;
    }

    if((n%6) % 2 == 0 || (n%4)%2 == 0){
        long long maxi = n/4;

        long long mini = n/6+1;

        if(n%6 == 0){
            mini = n/6;  
        }

        cout<<mini<<" "<<maxi<<endl;
        return;
    }

    cout<<-1<<endl;
    return;

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