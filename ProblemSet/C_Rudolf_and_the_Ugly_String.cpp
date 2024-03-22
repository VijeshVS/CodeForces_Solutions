#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    string a;
    cin>>n>>a;

    if(n<=2){
        cout<<0<<endl;
        return;
    }

    int count = 0;
    int prevMap = -1;

    for(int i = 2;i<n;i++){
        if(a[i] == 'p' && a[i-1] == 'a' && a[i-2] == 'm'){
            count++;
            prevMap = i;
        }
        else if(a[i] == 'e' && a[i-1] == 'i' && a[i-2] == 'p'){
            if(prevMap == i-2){

            }
            else{
                count++;
            }
        }
    }

    cout<<count<<endl;
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